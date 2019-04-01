const int led0 = 9;          // donar nom al pin 9 de l’Arduino
const int ldr0 = A0;         // donar nom al pin A0 de l’Arduino
const int led1 = 10;          // donar nom al pin 9 de l’Arduino
const int ldr1 = A1;         // donar nom al pin A0 de l’Arduino
const int led2 = 11;          // donar nom al pin 9 de l’Arduino
const int ldr2 = A2;         // donar nom al pin A0 de l’Arduino

int velocitat = 20;          // velocitat de l'acció en ms
int valLdr0;                 // guardar valor del ldr
int valLdr1;
int valLdr2;

//********** Setup ****************************************************************
void setup()
{
  
  pinMode(ldr0, INPUT);
  pinMode(ldr1, INPUT);
  pinMode(ldr2, INPUT);
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  
}

//********** Loop *****************************************************************
void loop()
{
  valLdr0 = analogRead(ldr0);   // llegir valor ldr
  valLdr1 = analogRead(ldr1);
  valLdr2 = analogRead(ldr2);
  
  valLdr0 = map(valLdr0, 43, 950, 255, 0);   // mapejar valor de 0-1023 a 0-255
  valLdr1 = map(valLdr1, 2, 950, 255, 0);
  valLdr2 = map(valLdr2, 2, 950, 255, 0);
  
  analogWrite(led0, valLdr0);    // actualitzar l'estat del led
  analogWrite(led1, valLdr1);
  analogWrite(led2, valLdr2);
  
}
