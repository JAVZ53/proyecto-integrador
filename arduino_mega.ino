#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <SoftwareSerial.h>
float tiempo1;
float tiempo2;
float tiempo3;
float tiempo4;

int x=0;

int distancia1;
int distancia2;
int distancia3;
int distancia4;

int aleatorio;

int son;

LiquidCrystal_I2C lcd(0x27, 20, 4);
SoftwareSerial mySerial(31, 33);

#define sonido 10

#define disttrig1 2
#define distecho1 3
#define disttrig2 4
#define distecho2 5
#define disttrig3 6
#define distecho3 7
#define disttrig4 8
#define distecho4 9

#define semgn 13
#define semyn 12
#define semrn 22
#define semgs 24
#define semys 26
#define semrs 28
#define semgd 30
#define semyd 32
#define semrd 34
#define semgi 36
#define semyi 38
#define semri 40
#define semgdn 42
#define semydn 44
#define semrdn 46
#define semgds 48
#define semyds 50
#define semrds 52


void setup() {

  Serial.begin(9600);
  mySerial.begin(9600);
  lcd.begin();                      
  lcd.backlight();

  pinMode(sonido, INPUT);

  pinMode(semgn, OUTPUT);
  pinMode(semyn, OUTPUT);
  pinMode(semrn, OUTPUT);
  pinMode(semgs, OUTPUT);
  pinMode(semys, OUTPUT);
  pinMode(semrs, OUTPUT);
  pinMode(semgd, OUTPUT);
  pinMode(semyd, OUTPUT);
  pinMode(semrd, OUTPUT);
  pinMode(semgi, OUTPUT);
  pinMode(semyi, OUTPUT);
  pinMode(semri, OUTPUT);
  pinMode(semgdn, OUTPUT);
  pinMode(semydn, OUTPUT);
  pinMode(semrdn, OUTPUT);
  pinMode(semgds, OUTPUT);
  pinMode(semyds, OUTPUT);
  pinMode(semrds, OUTPUT);

  pinMode(disttrig1, OUTPUT);
  pinMode(distecho1, INPUT);
  pinMode(disttrig2, OUTPUT);
  pinMode(distecho2, INPUT);
  pinMode(disttrig3, OUTPUT);
  pinMode(distecho3, INPUT);
  pinMode(disttrig4, OUTPUT);
  pinMode(distecho4, INPUT);

}

void loop() {
  //mySerial.write('H');
  son=digitalRead(sonido);
  while(son == HIGH){
    lcd.clear();
    digitalWrite(semgn, LOW);
    digitalWrite(semyn, LOW);
    digitalWrite(semrn, HIGH);
    digitalWrite(semgs, LOW);
    digitalWrite(semys, LOW);
    digitalWrite(semrs, HIGH);
    digitalWrite(semgd, LOW);
    digitalWrite(semyd, LOW);
    digitalWrite(semrd, HIGH);
    digitalWrite(semgi, LOW);
    digitalWrite(semyi, LOW);
    digitalWrite(semri, HIGH);
    digitalWrite(semgdn, LOW);
    digitalWrite(semydn, LOW); 
    digitalWrite(semrdn, HIGH); 
    digitalWrite(semgds, LOW); 
    digitalWrite(semyds, LOW);
    digitalWrite(semrds, HIGH);
  
    digitalWrite(disttrig1, HIGH);
    delay(1);
    digitalWrite(disttrig1, LOW);
    tiempo1 = pulseIn(distecho1, HIGH);
    distancia1 = 0.01715*tiempo1;
    digitalWrite(disttrig2, HIGH);
    delay(1);
    digitalWrite(disttrig2, LOW);
    tiempo2 = pulseIn(distecho2, HIGH);
    distancia2 = 0.01715*tiempo2;
    digitalWrite(disttrig3, HIGH);
    delay(1);
    digitalWrite(disttrig3, LOW);
    tiempo3 = pulseIn(distecho3, HIGH);
    distancia3 = 0.01715*tiempo3;
    digitalWrite(disttrig4, HIGH);
    delay(1);
    digitalWrite(disttrig4, LOW);
    tiempo4 = pulseIn(distecho4, HIGH);
    distancia4 = 0.01715*tiempo4;
    while(distancia1<20 and distancia2<20 and distancia3<20 and distancia4<20){
      aleatorio = random(1, 5);
      digitalWrite(disttrig1, HIGH);
      delay(1);
      digitalWrite(disttrig1, LOW);
      tiempo1 = pulseIn(distecho1, HIGH);
      distancia1 = 0.01715*tiempo1;
      digitalWrite(disttrig2, HIGH);
      delay(1);
      digitalWrite(disttrig2, LOW);
      tiempo2 = pulseIn(distecho2, HIGH);
      distancia2 = 0.01715*tiempo2;
      digitalWrite(disttrig3, HIGH);
      delay(1);
      digitalWrite(disttrig3, LOW);
      tiempo3 = pulseIn(distecho3, HIGH);
      distancia3 = 0.01715*tiempo3;
      digitalWrite(disttrig4, HIGH);
      delay(1);
      digitalWrite(disttrig4, LOW);
      tiempo4 = pulseIn(distecho4, HIGH);
      distancia4 = 0.01715*tiempo4;
      if(aleatorio = 1){
        if(distancia1<10){
          digitalWrite(semrn, LOW);
          digitalWrite(semgn, HIGH);
          delay(1600);
          digitalWrite(semgn, LOW);
          for (x; x<4; x++){
            digitalWrite(semyn, HIGH);
            delay(500);
            digitalWrite(semyn, LOW);
            delay(500);
          }
          x=0;
          digitalWrite(semrn, HIGH);
        }
      }
      else if(distancia1<15){
        digitalWrite(semrdn, LOW);
        digitalWrite(semgdn, HIGH);
        delay(1600);
        digitalWrite(semgdn, LOW);
        for (x; x<4; x++){
          digitalWrite(semydn, HIGH);
          delay(500);
          digitalWrite(semydn, LOW);
          delay(500);
        }
        x=0;
        digitalWrite(semrdn, HIGH);
      }
    
      else if(aleatorio = 2){
        if(distancia2<10){
          digitalWrite(semrd, LOW);
          digitalWrite(semgd, HIGH);
          delay(1600);
          digitalWrite(semgd, LOW);
          for (x; x<4; x++){
            digitalWrite(semyd, HIGH);
            delay(500);
            digitalWrite(semyd, LOW);
            delay(500);
          }
          x=0;
          digitalWrite(semrd, HIGH);
        }
      }
      else if(aleatorio = 3){
        if(distancia3<10){
          digitalWrite(semrs, LOW);
          digitalWrite(semgs, HIGH);
          delay(1600);
          digitalWrite(semgs, LOW);
          for (x; x<4; x++){
            digitalWrite(semys, HIGH);
            delay(500);
            digitalWrite(semys, LOW);
            delay(500);
        }
        x=0;
        digitalWrite(semrs, HIGH);
      }
      else if(distancia3<15){
        digitalWrite(semrds, LOW);
        digitalWrite(semgds, HIGH);
        delay(1600);
        digitalWrite(semgds, LOW);
        for (x; x<4; x++){
          digitalWrite(semyds, HIGH);
          delay(500);
          digitalWrite(semyds, LOW);
          delay(500);
        }
        x=0;
        digitalWrite(semrds, HIGH);
      }
  
      else if(aleatorio = 4){
          if(distancia4<10){
            digitalWrite(semri, LOW);
            digitalWrite(semgi, HIGH);
            delay(1600);
            digitalWrite(semgi, LOW);
            for (x; x<4; x++){
              digitalWrite(semyi, HIGH);
              delay(500);
              digitalWrite(semyi, LOW);
              delay(500);
            }
            x=0;
            digitalWrite(semri, HIGH);
          }
        }
      }
    }
    while((distancia1<20 and distancia2<20 and distancia3<20) or (distancia1<20 and distancia2<20 and distancia4<20) or (distancia1<20 and distancia3<20 and distancia4<20) or (distancia2<20 and distancia2<20 and distancia4<20)){
      aleatorio = random(1, 5);
      digitalWrite(disttrig1, HIGH);
      delay(1);
      digitalWrite(disttrig1, LOW);
      tiempo1 = pulseIn(distecho1, HIGH);
      distancia1 = 0.01715*tiempo1;
      digitalWrite(disttrig2, HIGH);
      delay(1);
      digitalWrite(disttrig2, LOW);
      tiempo2 = pulseIn(distecho2, HIGH);
      distancia2 = 0.01715*tiempo2;
      digitalWrite(disttrig3, HIGH);
      delay(1);
      digitalWrite(disttrig3, LOW);
      tiempo3 = pulseIn(distecho3, HIGH);
      distancia3 = 0.01715*tiempo3;
      digitalWrite(disttrig4, HIGH);
      delay(1);
      digitalWrite(disttrig4, LOW);
      tiempo4 = pulseIn(distecho4, HIGH);
      distancia4 = 0.01715*tiempo4;
      if(aleatorio = 1){
        if(distancia1<10){
          digitalWrite(semrn, LOW);
          digitalWrite(semgn, HIGH);
          delay(1600);
          digitalWrite(semgn, LOW);
          for (x; x<4; x++){
            digitalWrite(semyn, HIGH);
            delay(500);
            digitalWrite(semyn, LOW);
            delay(500);
          }
          x=0;
          digitalWrite(semrn, HIGH);
        }
        else if(distancia1<15){
          digitalWrite(semrdn, LOW);
          digitalWrite(semgdn, HIGH);
          delay(1600);
          digitalWrite(semgdn, LOW);
          for (x; x<4; x++){
            digitalWrite(semydn, HIGH);
            delay(500);
            digitalWrite(semydn, LOW);
            delay(500);
          }
          x=0;
          digitalWrite(semrdn, HIGH);
        }
      }
      else if(aleatorio = 2){
        if(distancia2<10){
          digitalWrite(semrd, LOW);
          digitalWrite(semgd, HIGH);
          delay(1600);
          digitalWrite(semgd, LOW);
          for (x; x<4; x++){
            digitalWrite(semyd, HIGH);
            delay(500);
            digitalWrite(semyd, LOW);
            delay(500);
          }
          x=0;
          digitalWrite(semrd, HIGH);
        }
      }
      else if(aleatorio = 3){
        if(distancia3<10){
          digitalWrite(semrs, LOW);
          digitalWrite(semgs, HIGH);
          delay(1600);
          digitalWrite(semgs, LOW);
          for (x; x<4; x++){
            digitalWrite(semys, HIGH);
            delay(500);
            digitalWrite(semys, LOW);
            delay(500);
          }
          x=0;
          digitalWrite(semrs, HIGH);
        }
        else if(distancia3<15){
          digitalWrite(semrds, LOW);
          digitalWrite(semgds, HIGH);
          delay(1600);
          digitalWrite(semgds, LOW);
          for (x; x<4; x++){
            digitalWrite(semyds, HIGH);
            delay(500);
            digitalWrite(semyds, LOW);
            delay(500);
          }
        x=0;
        digitalWrite(semrds, HIGH);
      }
  
      else if(aleatorio = 4){
        digitalWrite(semri, LOW);
        if(distancia4<10){
          digitalWrite(semri, LOW);
          digitalWrite(semgi, HIGH);
          delay(1600);
          digitalWrite(semgi, LOW);
          for (x; x<4; x++){
            digitalWrite(semyi, HIGH);
            delay(500);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          x=0;
          digitalWrite(semri, HIGH);
        }
      }
      }
    }
    while((distancia1<20 and distancia2<20) or (distancia1<20 and distancia3<20) or (distancia1<20 and distancia4<20) or (distancia2<20 and distancia3<20) or (distancia2<20 and distancia4<20) or (distancia3<20 and distancia4<20)){
      aleatorio = random(1, 5);
      digitalWrite(disttrig1, HIGH);
      delay(1);
      digitalWrite(disttrig1, LOW);
      tiempo1 = pulseIn(distecho1, HIGH);
      distancia1 = 0.01715*tiempo1;
      digitalWrite(disttrig2, HIGH);
      delay(1);
      digitalWrite(disttrig2, LOW);
      tiempo2 = pulseIn(distecho2, HIGH);
      distancia2 = 0.01715*tiempo2;
      digitalWrite(disttrig3, HIGH);
      delay(1);
      digitalWrite(disttrig3, LOW);
      tiempo3 = pulseIn(distecho3, HIGH);
      distancia3 = 0.01715*tiempo3;
      digitalWrite(disttrig4, HIGH);
      delay(1);
      digitalWrite(disttrig4, LOW);
      tiempo4 = pulseIn(distecho4, HIGH);
      distancia4 = 0.01715*tiempo4;
      if(aleatorio = 1){
        if(distancia1<10){
          digitalWrite(semrn, LOW);
          digitalWrite(semgn, HIGH);
          delay(1600);
          digitalWrite(semgn, LOW);
          for (x; x<4; x++){
            digitalWrite(semyn, HIGH);
            delay(500);
            digitalWrite(semyn, LOW);
            delay(500);
          }
          x=0;
          digitalWrite(semrn, HIGH);
        }
        else if(distancia1<15){
          digitalWrite(semrdn, LOW);
          digitalWrite(semgdn, HIGH);
          delay(1600);
          digitalWrite(semgdn, LOW);
          for (x; x<4; x++){
            digitalWrite(semydn, HIGH);
            delay(500);
            digitalWrite(semydn, LOW);
            delay(500);
          }
          x=0;
          digitalWrite(semrdn, HIGH);
        }
      }
      else if(aleatorio = 2){
        if(distancia2<10){
          digitalWrite(semrd, LOW);
          digitalWrite(semgd, HIGH);
          delay(1600);
          digitalWrite(semgd, LOW);
          for (x; x<4; x++){
            digitalWrite(semyd, HIGH);
            delay(500);
            digitalWrite(semyd, LOW);
            delay(500);
          }
          x=0;
          digitalWrite(semrd, HIGH);
        }
        }
      else if(aleatorio = 3){
        if(distancia3<10){
          digitalWrite(semrs, LOW);
          digitalWrite(semgs, HIGH);
          delay(1600);
          digitalWrite(semgs, LOW);
          for (x; x<4; x++){
            digitalWrite(semys, HIGH);
            delay(500);
            digitalWrite(semys, LOW);
            delay(500);
          }
          x=0;
          digitalWrite(semrs, HIGH);
        }
      else if(distancia3<15){
        digitalWrite(semrds, LOW);
        digitalWrite(semgds, HIGH);
        delay(1600);
        digitalWrite(semgds, LOW);
        for (x; x<4; x++){
          digitalWrite(semyds, HIGH);
          delay(500);
          digitalWrite(semyds, LOW);
          delay(500);
        }
        x=0;
        digitalWrite(semrds, HIGH);
      }
    
      else if(aleatorio = 4){
          if(distancia4<10){
            digitalWrite(semri, LOW);
            digitalWrite(semgi, HIGH);
            delay(1600);
            digitalWrite(semgi, LOW);
            for (x; x<4; x++){
              digitalWrite(semyi, HIGH);
              delay(500);
              digitalWrite(semyi, LOW);
              delay(500);
            }
            x=0;
            digitalWrite(semri, HIGH);
          }
      }
      }
      }
      if(distancia1<20 and distancia2>20 and distancia3>20 and distancia4>20){
      if(distancia1<10){
        digitalWrite(semrn, LOW);
        digitalWrite(semgn, HIGH);
        delay(1600);
        digitalWrite(semgn, LOW);
        for (x; x<4; x++){
          digitalWrite(semyn, HIGH);
          delay(500);
          digitalWrite(semyn, LOW);
          delay(500);
        }
        x=0;
        digitalWrite(semrn, HIGH);
      }
      else if(distancia1<15){
        digitalWrite(semrdn, LOW);
        digitalWrite(semgdn, HIGH);
        delay(1600);
        digitalWrite(semgdn, LOW);
        for (x; x<4; x++){
          digitalWrite(semydn, HIGH);
          delay(500);
          digitalWrite(semydn, LOW);
          delay(500);
        }
        x=0;
        digitalWrite(semrdn, HIGH);
        }
      }
      else if(distancia2<20 and distancia1>20 and distancia3>20 and distancia4>20){
        digitalWrite(semrd, LOW);
        digitalWrite(semgd, HIGH);
        delay(1600);
        digitalWrite(semgd, LOW);
        for (x; x<4; x++){
          digitalWrite(semyd, HIGH);
          delay(500);
          digitalWrite(semyd, LOW);
          delay(500);
        }
        x=0;
        digitalWrite(semrd, HIGH);
      }
      else if(distancia3<20 and distancia1>20 and distancia2>20 and distancia4>20){
        if(distancia3<10){
        digitalWrite(semrs, LOW);
        digitalWrite(semgs, HIGH);
        delay(1600);
        digitalWrite(semgs, LOW);
        for (x; x<4; x++){
          digitalWrite(semys, HIGH);
          delay(500);
          digitalWrite(semys, LOW);
          delay(500);
        }
        x=0;
        digitalWrite(semrs, HIGH);
        }
        else if(distancia3<15){
          digitalWrite(semrds, LOW);
          digitalWrite(semgds, HIGH);
          delay(1600);
          digitalWrite(semgds, LOW);
          for (x; x<4; x++){
            digitalWrite(semyds, HIGH);
            delay(500);
            digitalWrite(semyds, LOW);
            delay(500);
          }
          x=0;
          digitalWrite(semrds, HIGH);
        }
      }
      else if(distancia4<20 and distancia1>20 and distancia2>20 and distancia3>20){
        if(distancia4<10){
          digitalWrite(semri, LOW);
          digitalWrite(semgi, HIGH);
          delay(1600);
          digitalWrite(semgi, LOW);
          for (x; x<4; x++){
            digitalWrite(semyi, HIGH);
            delay(500);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          x=0;
          digitalWrite(semri, HIGH);
        }
      }
    }
}
  /*while(True){
    if(distancia1<20){
    lcd.print("auto en calle 1");
    digitalWrite(semgn, HIGH);
    delay(1000);
    }
    else if(distancia2<20){
    lcd.print("auto en calle 2");
    digitalWrite(semgs, HIGH);
    delay(1000);
    }
    else if(distancia3<20){
    lcd.print("auto en calle 3");
    digitalWrite(semgd, HIGH);
    delay(1000);
    }
    else if(distancia4<20){
    lcd.print("auto en calle 4");
    digitalWrite(semgi, HIGH);
    delay(1000);
    }
    lcd.print("auto en sensor 4");
    lcd.clear();
    delay(100);
    son = digitalRead(sonido);
    if(son == HIGH){
    digitalWrite(semgn, HIGH);
    }
    else{
    digitalWrite(semgn, LOW);
    }
    digitalWrite(disttrig1, HIGH);
    delay(1);
    digitalWrite(disttrig1, LOW);
    tiempo1 = pulseIn(distecho1, HIGH);
    distancia1 = 0.01715*tiempo1;
    Serial.println(distancia1);
    delay(300);
    digitalWrite(disttrig2, HIGH);
    delay(1);
    digitalWrite(disttrig2, LOW);
    tiempo2 = pulseIn(distecho2, HIGH);
    distancia2 = 0.01715*tiempo2;
    Serial.println(distancia2);
    delay(300);
    digitalWrite(disttrig3, HIGH);
    delay(1);
    digitalWrite(disttrig3, LOW);
    tiempo3 = pulseIn(distecho3, HIGH);
    distancia3 = 0.01715*tiempo3;
    Serial.println(distancia3);
    delay(300);
    digitalWrite(disttrig4, HIGH);
    delay(1);
    digitalWrite(disttrig4, LOW);
    tiempo4 = pulseIn(distecho4, HIGH);
    distancia4 = 0.01715*tiempo4;
    Serial.println(distancia4);
    delay(300);

    digitalWrite(semgn, HIGH);
    delay(100);
    digitalWrite(semyn, HIGH);
    delay(100);
    digitalWrite(semrn, HIGH);
    delay(100);
    digitalWrite(semgs, HIGH);
    delay(100);
    digitalWrite(semys, HIGH);
    delay(100);
    digitalWrite(semrs, HIGH);
    delay(100);
    digitalWrite(semgd, HIGH);
    delay(100);
    digitalWrite(semyd, HIGH);
    delay(100);
    digitalWrite(semrd, HIGH);
    delay(100);
    digitalWrite(semgi, HIGH);
    delay(100);
    digitalWrite(semyi, HIGH);
    delay(100);
    digitalWrite(semri, HIGH);
    delay(100);
    digitalWrite(semgdn, HIGH);
    delay(100);
    digitalWrite(semydn, HIGH);
    delay(100); 
    digitalWrite(semrdn, HIGH);
    delay(100); 
    digitalWrite(semgds, HIGH);
    delay(100); 
    digitalWrite(semyds, HIGH);
    delay(100); 
    digitalWrite(semrds, HIGH);
    delay(100);
    digitalWrite(semgn, LOW);
    delay(100);
    digitalWrite(semyn, LOW);
    delay(100);
    digitalWrite(semrn, LOW);
    delay(100);
    digitalWrite(semgs, LOW);
    delay(100);
    digitalWrite(semys, LOW);
    delay(100);
    digitalWrite(semrs, LOW);
    delay(100);
    digitalWrite(semgd, LOW);
    delay(100);
    digitalWrite(semyd, LOW);
    delay(100);
    digitalWrite(semrd, LOW);
    delay(100);
    digitalWrite(semgi, LOW);
    delay(100);
    digitalWrite(semyi, LOW);
    delay(100);
    digitalWrite(semri, LOW);
    delay(100);
    digitalWrite(semgdn, LOW);
    delay(100);
    digitalWrite(semydn, LOW);
    delay(100); 
    digitalWrite(semrdn, LOW);
    delay(100); 
    digitalWrite(semgds, LOW);
    delay(100); 
    digitalWrite(semyds, LOW);
    delay(100); 
    digitalWrite(semrds, LOW);
    delay(100);}*/ 
