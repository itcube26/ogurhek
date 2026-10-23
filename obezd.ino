#include <GyverPing.h>

#define HC_TRIG 8
#define HC_ECHO 9
#define M1_dir 45
#define M1_Speed 44
#define M2_dir 47
#define M2_Speed 46
GPingSync sonar(HC_TRIG, HC_ECHO);

void setup() {
    Serial.begin(115200);
    // Объявление пинов, работающих на выход.
pinMode(M1_dir, OUTPUT);
pinMode(M1_Speed, OUTPUT);

pinMode(M2_dir, OUTPUT);
pinMode(M2_Speed, OUTPUT);
}

void loop() {
    // сделать измерение
    sonar.ping();

    // открой плоттер для вывода графика
    Serial.println(sonar.getRaw());       // "сырое" значение
    
    if (sonar.getRaw() <100){
    obezd();
  } else {
    vpered();
  }

  delay(50);
}


void obezd(){
  vlevo();
  delay(1000);
  vpered();
  delay(2000);
}

void vpered(){
   digitalWrite(M1_dir, 1);
  analogWrite(M1_Speed, 60);
  digitalWrite(M2_dir, 1);
  analogWrite(M2_Speed, 60);

}

void nazad(){

digitalWrite(M1_dir, 1);
analogWrite(M1_Speed, 60);
digitalWrite(M2_dir, 1);
analogWrite(M2_Speed, 60);
}

void vlevo(){

digitalWrite(M1_dir, 1);
analogWrite(M1_Speed, 60);
digitalWrite(M2_dir, 0);
analogWrite(M2_Speed, 60);
}

void vpravo(){

digitalWrite(M1_dir, 0);
analogWrite(M1_Speed, 60);
digitalWrite(M2_dir, 1);
analogWrite(M2_Speed, 60);

}

void stop(){

digitalWrite(M1_dir, 0);
analogWrite(M1_Speed,0);
digitalWrite(M2_dir, 0);
analogWrite(M2_Speed, 0);
}
  
