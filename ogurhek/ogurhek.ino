#define M1_dir 45
#define M1_Speed 44
#define M2_dir 47
#define M2_Speed 46

void setup() { // один раз при включении

  pinMode(M1_dir, OUTPUT);
  pinMode(M1_Speed, OUTPUT);
  
  pinMode(M2_dir, OUTPUT);
  pinMode(M2_Speed, OUTPUT);


}

void vpered(){
  digitalWrite(M1_dir, 0);
  digitalWrite(M2_dir, 0);
  analogWrite(M1_Speed, 50);
  analogWrite(M2_Speed, 50); 
}



void loop() { 
  
  vpered();
               
  delay ( 1000 );

  // стоп
  analogWrite(M1_Speed,0);
  analogWrite(M2_Speed,0);
  delay ( 2000 );

  // назад
  digitalWrite(M1_dir, 1);
  digitalWrite(M2_dir, 1);
  analogWrite(M1_Speed, 50);
  analogWrite(M2_Speed, 50);  
               
  delay ( 1000 );

  // стоп
  analogWrite(M1_Speed,0);
  analogWrite(M2_Speed,0);
  delay ( 2000 );
  
  // налево
  digitalWrite(M1_dir, 0);
  digitalWrite(M2_dir, 1);
  analogWrite(M1_Speed, 50);
  analogWrite(M2_Speed, 50); 
  delay ( 1000 );
  
  // направо
  digitalWrite(M1_dir, 1);
  digitalWrite(M2_dir, 0);
  analogWrite(M1_Speed, 50);
  analogWrite(M2_Speed, 50); 
  delay ( 1000 );
}
