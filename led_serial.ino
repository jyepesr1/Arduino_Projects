int input;
 
void setup(){
 
pinMode(13, OUTPUT); // Declaramos que utilizaremos el pin 13 como salida
 
Serial.begin(9600);
}
 
void loop(){
  
  if (Serial.available()>0){
 
    input=Serial.read();
 
    if (input=='e'){
 
      digitalWrite(13, HIGH); //Si el valor de input es e, se enciende el led
 
    } else if(input=='a'){
 
      digitalWrite(13, LOW); //Si el valor de input es a, se apaga el LED
 
    }
  }
}
