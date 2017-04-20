//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// The Unnamed Circuit
// 
// Made by buihuubang buihuubang
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4689119-the-unnamed-circuit



int s=500;

void setup() {
  
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
}


  

void loop() {
  digitalWrite(7, 1);   
  delay(s);               
  digitalWrite(6, 1);    
  delay(s); 
  digitalWrite(5, 1);    
  delay(s); 
  digitalWrite(4, 1);    
  delay(s); 
  digitalWrite(3, 1);    
  delay(s); 
  digitalWrite(2, 1);    
  delay(s); 
  digitalWrite(1, 1);    
  delay(s); 
  digitalWrite(0, 1);    
  delay(s); 
  digitalWrite(0, 0);    
  delay(s); 
  digitalWrite(1, 0);    
  delay(s); 
  digitalWrite(2, 0);    
  delay(s); 
  digitalWrite(3, 0);    
  delay(s); 
  digitalWrite(4, 0);    
  delay(s); 
  digitalWrite(5, 0);    
  delay(s); 
  digitalWrite(6, 0);    
  delay(s); 
  digitalWrite(7, 0);    
  delay(s); 
  
}
