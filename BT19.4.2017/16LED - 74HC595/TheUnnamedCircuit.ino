//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// The Unnamed Circuit
// 
// Made by buihuubang buihuubang
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4690285-the-unnamed-circuit


int latchPin = 8;

int clockPin = 12;

int dataPin = 11;
 

const int HC595_COUNT = 2;
byte ledStatus[HC595_COUNT]= {0}; 
void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}
 
void fillValueToArray(byte value) {
  for (int i = 0;i < HC595_COUNT; i += 1) {
    ledStatus[i] = value;
  }
}
 
void shiftOutHC595(int dataPin, int clockPin, byte ledStatus[]) {
  digitalWrite(latchPin, LOW);
  
  for (int i = 0; i < HC595_COUNT; i++) {
    shiftOut(dataPin,clockPin,LSBFIRST,ledStatus[i]);  
  }
  
  digitalWrite(latchPin, HIGH);
}
 
void loop() { 
  
 
   fillValueToArray(0);
 
  for (int i = 0; i < HC595_COUNT; i++) {
    for (byte j=0;j<8;j++) {
      ledStatus[i] = (ledStatus[i] << 1) | 1;
      shiftOutHC595(dataPin,clockPin,ledStatus);
      delay(500); 
    }    
  }
  
  
  for (int i = 0; i < HC595_COUNT; i++) {
    for (byte j=0;j<8;j++) {
      ledStatus[i] = (ledStatus[i] << 1);
      shiftOutHC595(dataPin,clockPin,ledStatus);
      delay(500); 
    }    
  }
  
}
