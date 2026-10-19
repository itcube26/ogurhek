

#define M1_dir 45
#define M1_Speed 44
#define M2_dir 47
#define M2_Speed 46

void setup() {

pinMode(M1_dir, OUTPUT);
pinMode(M1_Speed, OUTPUT);

pinMode(M2_dir, OUTPUT);
pinMode(M2_Speed, OUTPUT);

}
void loop() {
  nazad();
}

void vpered(){
digitalWrite(M1_dir,0);
analogWrite(M1_Speed,70);

digitalWrite(M2_dir,0);
analogWrite(M2_Speed,70);
 }

void nazad(){
digitalWrite(M1_dir,1);
analogWrite(M1_Speed,70);

digitalWrite(M2_dir,1);
analogWrite(M2_Speed,70);
 }
#define M1_dir 45
#define M1_Speed 44
#define M2_dir 47
#define M2_Speed 46

void setup() {

pinMode(M1_dir, OUTPUT);
pinMode(M1_Speed, OUTPUT);

pinMode(M2_dir, OUTPUT);
pinMode(M2_Speed, OUTPUT);
}

void vpered(){
digitalWrite(M1_dir,0);
analogWrite(M1_Speed,70);

digitalWrite(M2_dir,0);
analogWrite(M2_Speed,70);
}

void nazad(){
digitalWrite(M1_dir,1);
analogWrite(M1_Speed,70);

digitalWrite(M2_dir,1);
analogWrite(M2_Speed,70);
} 

void nalevo(){
digitalWrite(M1_dir,1);
analogWrite(M1_Speed,70);

digitalWrite(M2_dir,0);
analogWrite(M2_Speed,70); 
}

void napravo(){
digitalWrite(M1_dir,0);
analogWrite(M1_Speed,70);

digitalWrite(M2_dir,1);
analogWrite(M2_Speed,70);
} 
