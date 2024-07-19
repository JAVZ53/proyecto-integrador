#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <SoftwareSerial.h>
float tiempo1;
float tiempo2;
float tiempo3;
float tiempo4;

int x = 0;
int l=8;
int j=6;
int p=3;

char recep;
char envi;

int distancia1;
int distancia2;
int distancia3;
int distancia4;

int aleatorio;

int son;

LiquidCrystal_I2C lcd(0x27, 20, 4);

SoftwareSerial mySerial(27, 29);

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

#define sempasog1 53
#define sempasoy1 51
#define sempasor1 49
#define sempasog2 47
#define sempasoy2 45
#define sempasor2 43
#define sempasog3 41
#define sempasoy3 39
#define sempasor3 37
#define sempasog4 35
#define sempasoy4 33
#define sempasor4 31


void setup() {

  Serial.begin(9600);
  mySerial.begin(9600);
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0);

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

  pinMode(sempasog1, OUTPUT);
  pinMode(sempasoy1, OUTPUT);
  pinMode(sempasor1, OUTPUT);
  pinMode(sempasog2, OUTPUT);
  pinMode(sempasoy2, OUTPUT);
  pinMode(sempasor2, OUTPUT);
  pinMode(sempasog3, OUTPUT);
  pinMode(sempasoy3, OUTPUT);
  pinMode(sempasor3, OUTPUT);
  pinMode(sempasog4, OUTPUT);
  pinMode(sempasoy4, OUTPUT);
  pinMode(sempasor4, OUTPUT);

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
  lcd.clear();
  son = digitalRead(sonido);
  lcd.setCursor(0, 0);
  while (son == LOW) {
    son = digitalRead(sonido);
    lcd.clear();
    lcd.setCursor(0, 0);
    digitalWrite(sempasog1, HIGH);
    digitalWrite(sempasoy1, LOW);
    digitalWrite(sempasor1, LOW);
    digitalWrite(sempasog2, HIGH);
    digitalWrite(sempasoy2, LOW);
    digitalWrite(sempasor2, LOW);
    digitalWrite(sempasog3, HIGH);
    digitalWrite(sempasoy3, LOW);
    digitalWrite(sempasor3, LOW);
    digitalWrite(sempasog4, HIGH);
    digitalWrite(sempasoy4, LOW);
    digitalWrite(sempasor4, LOW);
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
    distancia1 = 0.01715 * tiempo1;
    digitalWrite(disttrig2, HIGH);
    delay(1);
    digitalWrite(disttrig2, LOW);
    tiempo2 = pulseIn(distecho2, HIGH);
    distancia2 = 0.01715 * tiempo2;
    digitalWrite(disttrig3, HIGH);
    delay(1);
    digitalWrite(disttrig3, LOW);
    tiempo3 = pulseIn(distecho3, HIGH);
    distancia3 = 0.01715 * tiempo3;
    digitalWrite(disttrig4, HIGH);
    delay(1);
    digitalWrite(disttrig4, LOW);
    tiempo4 = pulseIn(distecho4, HIGH);
    distancia4 = 0.01715 * tiempo4;
    while (distancia1 < l and distancia2 < l and distancia3 < l and distancia4 < l) {
      aleatorio = random(1, 5);
      if (mySerial.available()){
        recep=mySerial.read();
        mySerial.print('n');
        if(recep == 'a' or recep == 'b'){
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasoy2, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasoy4, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semyn, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(semys, LOW);
          digitalWrite(semrs, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semyd, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(semyi, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(semgdn, LOW);
          digitalWrite(semydn, LOW);
          digitalWrite(semrdn, LOW);
          digitalWrite(semgds, LOW);
          digitalWrite(semyds, LOW);
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog1, HIGH);
          digitalWrite(semgn, HIGH);
          digitalWrite(semgs, HIGH);
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 3);
          lcd.print("puede avanzar v");
          delay(7000);
          digitalWrite(sempasog1, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(sempasoy1, HIGH);
          for(x; x<4; x++){
            digitalWrite(semyn, HIGH);
            digitalWrite(semys, HIGH);
            delay(500);
            digitalWrite(semyn, LOW);
            digitalWrite(semys, LOW);
            delay(500);
          }
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, HIGH);
          digitalWrite(semrn, HIGH);
          digitalWrite(semrs, HIGH);
          lcd.clear();
        }
        else if(recep == 'c' or recep == 'd'){
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasoy2, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasoy4, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semyn, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(semys, LOW);
          digitalWrite(semrs, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semyd, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(semyi, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(semgdn, LOW);
          digitalWrite(semydn, LOW);
          digitalWrite(semrdn, LOW);
          digitalWrite(semgds, LOW);
          digitalWrite(semyds, LOW);
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog2, HIGH);
          digitalWrite(semgd, HIGH);
          digitalWrite(semgi, HIGH);
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 3);
          lcd.print("puede avanzar v");
          delay(7000);
          digitalWrite(sempasog2, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(sempasoy2, HIGH);
          for(x; x<4; x++){
            digitalWrite(semyd, HIGH);
            digitalWrite(semyi, HIGH);
            delay(500);
            digitalWrite(semyd, LOW);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          digitalWrite(sempasoy2, LOW);
          digitalWrite(sempasor2, HIGH);
          digitalWrite(semrd, HIGH);
          digitalWrite(semri, HIGH);
          lcd.clear();
        }
        else if(recep == 'e' or recep == 'f'){
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasoy2, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasoy4, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semyn, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(semys, LOW);
          digitalWrite(semrs, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semyd, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(semyi, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(semgdn, LOW);
          digitalWrite(semydn, LOW);
          digitalWrite(semrdn, LOW);
          digitalWrite(semgds, LOW);
          digitalWrite(semyds, LOW);
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog3, HIGH);
          digitalWrite(semgn, HIGH);
          digitalWrite(semgs, HIGH);
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 3);
          lcd.print("puede avanzar v");
          delay(7000);
          digitalWrite(sempasog3, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(sempasoy3, HIGH);
          for(x; x<4; x++){
            digitalWrite(semyn, HIGH);
            digitalWrite(semys, HIGH);
            delay(500);
            digitalWrite(semyn, LOW);
            digitalWrite(semys, LOW);
            delay(500);
          }
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, HIGH);
          digitalWrite(semrn, HIGH);
          digitalWrite(semrs, HIGH);
          lcd.clear();
        }
        else if(recep == 'g' or recep == 'h'){
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasoy2, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasoy4, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semyn, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(semys, LOW);
          digitalWrite(semrs, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semyd, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(semyi, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(semgdn, LOW);
          digitalWrite(semydn, LOW);
          digitalWrite(semrdn, LOW);
          digitalWrite(semgds, LOW);
          digitalWrite(semyds, LOW);
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog4, HIGH);
          digitalWrite(semgd, HIGH);
          digitalWrite(semgi, HIGH);
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 3);
          lcd.print("puede avanzar v");
          delay(7000);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(sempasoy4, HIGH);
          for(x; x<4; x++){
            digitalWrite(semyd, HIGH);
            digitalWrite(semyi, HIGH);
            delay(500);
            digitalWrite(semyd, LOW);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          digitalWrite(sempasoy4, LOW);
          digitalWrite(sempasor4, HIGH);
          digitalWrite(semrd, HIGH);
          digitalWrite(semri, HIGH);
          lcd.clear();
        }
      }
      digitalWrite(disttrig1, HIGH);
      delay(1);
      digitalWrite(disttrig1, LOW);
      tiempo1 = pulseIn(distecho1, HIGH);
      distancia1 = 0.01715 * tiempo1;
      digitalWrite(disttrig2, HIGH);
      delay(1);
      digitalWrite(disttrig2, LOW);
      tiempo2 = pulseIn(distecho2, HIGH);
      distancia2 = 0.01715 * tiempo2;
      digitalWrite(disttrig3, HIGH);
      delay(1);
      digitalWrite(disttrig3, LOW);
      tiempo3 = pulseIn(distecho3, HIGH);
      distancia3 = 0.01715 * tiempo3;
      digitalWrite(disttrig4, HIGH);
      delay(1);
      digitalWrite(disttrig4, LOW);
      tiempo4 = pulseIn(distecho4, HIGH);
      distancia4 = 0.01715 * tiempo4;
      if (aleatorio = 1) {
        if (distancia1 < p) {
          mySerial.print('k');
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 1);
          lcd.print("puede doblar >");
          lcd.setCursor(0,2);
          lcd.print("puede avanzar v");
          lcd.setCursor(0,3);
          lcd.print("puede doblar <");
          digitalWrite(semrn, LOW);
          digitalWrite(semrs, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgn, HIGH);
          digitalWrite(semgs, HIGH);
          digitalWrite(sempasog1, HIGH);
          delay(7000);
          digitalWrite(semgn, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semyn, HIGH);
            digitalWrite(semys, HIGH);
            delay(500);
            digitalWrite(semyn, LOW);
            digitalWrite(semys, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, HIGH);
          digitalWrite(semrn, HIGH);
          digitalWrite(semrs, HIGH);
          lcd.clear();
        }
        else if (distancia1 < j) {
          mySerial.print('k');
          lcd.print("puede avanzar ^");
          digitalWrite(semrdn, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgdn, HIGH);
          digitalWrite(semrn, HIGH);
          digitalWrite(sempasog1, HIGH);
          delay(7000);
          lcd.setCursor(0, 1);
          lcd.print("puede doblar <");
          digitalWrite(semgdn, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semydn, HIGH);
            digitalWrite(semyn, HIGH);
            delay(500);
            digitalWrite(semydn, LOW);
            digitalWrite(semyn, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, HIGH);
          digitalWrite(semrdn, HIGH);
          digitalWrite(semrn, HIGH);
          lcd.clear();
        }
      }
      else if (aleatorio = 2) {
        if (distancia2 < p) {
          mySerial.print('k');
          lcd.print("puede avanzar >");
          lcd.print("puede avanzar <");
          digitalWrite(semrd, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semgd, HIGH);
          digitalWrite(semri, HIGH);
          digitalWrite(sempasog2, HIGH);
          delay(7000);
          digitalWrite(sempasog2, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(sempasoy2, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semyd, HIGH);
            digitalWrite(semyi, HIGH);
            delay(500);
            digitalWrite(semyd, LOW);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy2, LOW);          
          digitalWrite(semrd, HIGH);
          digitalWrite(semri, HIGH);
          digitalWrite(sempasor2, HIGH);
          lcd.clear();
        }
      } 
      else if (aleatorio = 3) {
        if (distancia3 < p) {
          mySerial.print('k');
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 1);
          lcd.print("puede doblar >");
          lcd.setCursor(0,2);
          lcd.print("puede avanzar v");
          lcd.setCursor(0,3);
          lcd.print("puede doblar <");
          digitalWrite(semrs, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgs, HIGH);
          digitalWrite(semrs, HIGH);
          digitalWrite(sempasog3, HIGH);
          delay(7000);
          digitalWrite(semgs, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semys, HIGH);
            digitalWrite(semyn, HIGH);
            delay(500);
            digitalWrite(semys, LOW);
            digitalWrite(semyn, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, HIGH);
          digitalWrite(semrs, HIGH);
          digitalWrite(semrn, HIGH);
          lcd.clear();
        }
        else if (distancia1 < j) {
          mySerial.print('k');
          lcd.print("puede avanzar v");
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgds, HIGH);
          digitalWrite(sempasog3, HIGH);
          delay(7000);
          lcd.setCursor(0, 1);
          lcd.print("puede doblar >");
          digitalWrite(semgds, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semyds, HIGH);
            delay(500);
            digitalWrite(semyds, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, HIGH);
          digitalWrite(semrds, HIGH);
          lcd.clear();
        }
      }
      else if (aleatorio = 4) {
        if (distancia4 < p) {
          mySerial.print('k');
          lcd.print("puede avanzar <");
          lcd.print("puede avanzar >");
          digitalWrite(semri, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semgi, HIGH);
          digitalWrite(semgd, HIGH);
          digitalWrite(sempasog4, HIGH);
          delay(7000);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(sempasoy4, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semyi, HIGH);
            digitalWrite(semrd, HIGH);
            delay(500);
            digitalWrite(semyi, LOW);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy4, LOW);          
          digitalWrite(semri, HIGH);
          digitalWrite(semrd, HIGH);
          digitalWrite(sempasor4, HIGH);
          lcd.clear();
        }
      }
    }
  
    while ((distancia1 < l and distancia2 < l and distancia3 < l) or (distancia1 < l and distancia2 < l and distancia4 < l) or (distancia1 < l and distancia3 < l and distancia4 < l) or (distancia2 < l and distancia2 < l and distancia4 < l)) {
      aleatorio = random(1, 5);
      if (mySerial.available()){
        recep=mySerial.read();
        mySerial.print('n');
        if(recep == 'a' or recep == 'b'){
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasoy2, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasoy4, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semyn, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(semys, LOW);
          digitalWrite(semrs, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semyd, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(semyi, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(semgdn, LOW);
          digitalWrite(semydn, LOW);
          digitalWrite(semrdn, LOW);
          digitalWrite(semgds, LOW);
          digitalWrite(semyds, LOW);
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog1, HIGH);
          digitalWrite(semgn, HIGH);
          digitalWrite(semgs, HIGH);
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 3);
          lcd.print("puede avanzar v");
          delay(7000);
          digitalWrite(sempasog1, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(sempasoy1, HIGH);
          for(x; x<4; x++){
            digitalWrite(semyn, HIGH);
            digitalWrite(semys, HIGH);
            delay(500);
            digitalWrite(semyn, LOW);
            digitalWrite(semys, LOW);
            delay(500);
          }
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, HIGH);
          digitalWrite(semrn, HIGH);
          digitalWrite(semrs, HIGH);
          lcd.clear();
        }
        else if(recep == 'c' or recep == 'd'){
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasoy2, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasoy4, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semyn, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(semys, LOW);
          digitalWrite(semrs, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semyd, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(semyi, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(semgdn, LOW);
          digitalWrite(semydn, LOW);
          digitalWrite(semrdn, LOW);
          digitalWrite(semgds, LOW);
          digitalWrite(semyds, LOW);
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog2, HIGH);
          digitalWrite(semgd, HIGH);
          digitalWrite(semgi, HIGH);
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 3);
          lcd.print("puede avanzar v");
          delay(7000);
          digitalWrite(sempasog2, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(sempasoy2, HIGH);
          for(x; x<4; x++){
            digitalWrite(semyd, HIGH);
            digitalWrite(semyi, HIGH);
            delay(500);
            digitalWrite(semyd, LOW);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          digitalWrite(sempasoy2, LOW);
          digitalWrite(sempasor2, HIGH);
          digitalWrite(semrd, HIGH);
          digitalWrite(semri, HIGH);
          lcd.clear();
        }
        else if(recep == 'e' or recep == 'f'){
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasoy2, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasoy4, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semyn, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(semys, LOW);
          digitalWrite(semrs, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semyd, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(semyi, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(semgdn, LOW);
          digitalWrite(semydn, LOW);
          digitalWrite(semrdn, LOW);
          digitalWrite(semgds, LOW);
          digitalWrite(semyds, LOW);
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog3, HIGH);
          digitalWrite(semgn, HIGH);
          digitalWrite(semgs, HIGH);
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 3);
          lcd.print("puede avanzar v");
          delay(7000);
          digitalWrite(sempasog3, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(sempasoy3, HIGH);
          for(x; x<4; x++){
            digitalWrite(semyn, HIGH);
            digitalWrite(semys, HIGH);
            delay(500);
            digitalWrite(semyn, LOW);
            digitalWrite(semys, LOW);
            delay(500);
          }
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, HIGH);
          digitalWrite(semrn, HIGH);
          digitalWrite(semrs, HIGH);
          lcd.clear();
        }
        else if(recep == 'g' or recep == 'h'){
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasoy2, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasoy4, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semyn, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(semys, LOW);
          digitalWrite(semrs, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semyd, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(semyi, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(semgdn, LOW);
          digitalWrite(semydn, LOW);
          digitalWrite(semrdn, LOW);
          digitalWrite(semgds, LOW);
          digitalWrite(semyds, LOW);
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog4, HIGH);
          digitalWrite(semgd, HIGH);
          digitalWrite(semgi, HIGH);
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 3);
          lcd.print("puede avanzar v");
          delay(7000);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(sempasoy4, HIGH);
          for(x; x<4; x++){
            digitalWrite(semyd, HIGH);
            digitalWrite(semyi, HIGH);
            delay(500);
            digitalWrite(semyd, LOW);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          digitalWrite(sempasoy4, LOW);
          digitalWrite(sempasor4, HIGH);
          digitalWrite(semrd, HIGH);
          digitalWrite(semri, HIGH);
          lcd.clear();
        }
      }
      digitalWrite(disttrig1, HIGH);
      delay(1);
      digitalWrite(disttrig1, LOW);
      tiempo1 = pulseIn(distecho1, HIGH);
      distancia1 = 0.01715 * tiempo1;
      digitalWrite(disttrig2, HIGH);
      delay(1);
      digitalWrite(disttrig2, LOW);
      tiempo2 = pulseIn(distecho2, HIGH);
      distancia2 = 0.01715 * tiempo2;
      digitalWrite(disttrig3, HIGH);
      delay(1);
      digitalWrite(disttrig3, LOW);
      tiempo3 = pulseIn(distecho3, HIGH);
      distancia3 = 0.01715 * tiempo3;
      digitalWrite(disttrig4, HIGH);
      delay(1);
      digitalWrite(disttrig4, LOW);
      tiempo4 = pulseIn(distecho4, HIGH);
      distancia4 = 0.01715 * tiempo4;
      if (aleatorio = 1) {
        if (distancia1 < p) {
          mySerial.print('k');
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 1);
          lcd.print("puede doblar >");
          lcd.setCursor(0,2);
          lcd.print("puede avanzar v");
          lcd.setCursor(0,3);
          lcd.print("puede doblar <");
          digitalWrite(semrn, LOW);
          digitalWrite(semrs, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgn, HIGH);
          digitalWrite(semgs, HIGH);
          digitalWrite(sempasog1, HIGH);
          delay(7000);
          digitalWrite(semgn, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semyn, HIGH);
            digitalWrite(semys, HIGH);
            delay(500);
            digitalWrite(semyn, LOW);
            digitalWrite(semys, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, HIGH);
          digitalWrite(semrn, HIGH);
          digitalWrite(semrs, HIGH);
          lcd.clear();
        }
        else if (distancia1 < j) {
          mySerial.print('k');
          lcd.print("puede avanzar ^");
          digitalWrite(semrdn, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgdn, HIGH);
          digitalWrite(semrn, HIGH);
          digitalWrite(sempasog1, HIGH);
          delay(7000);
          lcd.setCursor(0, 1);
          lcd.print("puede doblar <");
          digitalWrite(semgdn, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semydn, HIGH);
            digitalWrite(semyn, HIGH);
            delay(500);
            digitalWrite(semydn, LOW);
            digitalWrite(semyn, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, HIGH);
          digitalWrite(semrdn, HIGH);
          digitalWrite(semrn, HIGH);
          lcd.clear();
        }
      }
      else if (aleatorio = 2) {
        if (distancia2 < p) {
          mySerial.print('k');
          lcd.print("puede avanzar >");
          lcd.print("puede avanzar <");
          digitalWrite(semrd, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semgd, HIGH);
          digitalWrite(semri, HIGH);
          digitalWrite(sempasog2, HIGH);
          delay(7000);
          digitalWrite(sempasog2, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(sempasoy2, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semyd, HIGH);
            digitalWrite(semyi, HIGH);
            delay(500);
            digitalWrite(semyd, LOW);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy2, LOW);          
          digitalWrite(semrd, HIGH);
          digitalWrite(semri, HIGH);
          digitalWrite(sempasor2, HIGH);
          lcd.clear();
        }
      } 
      else if (aleatorio = 3) {
        if (distancia3 < p) {
          mySerial.print('k');
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 1);
          lcd.print("puede doblar >");
          lcd.setCursor(0,2);
          lcd.print("puede avanzar v");
          lcd.setCursor(0,3);
          lcd.print("puede doblar <");
          digitalWrite(semrs, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgs, HIGH);
          digitalWrite(semrs, HIGH);
          digitalWrite(sempasog3, HIGH);
          delay(7000);
          digitalWrite(semgs, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semys, HIGH);
            digitalWrite(semyn, HIGH);
            delay(500);
            digitalWrite(semys, LOW);
            digitalWrite(semyn, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, HIGH);
          digitalWrite(semrs, HIGH);
          digitalWrite(semrn, HIGH);
          lcd.clear();
        }
        else if (distancia1 < j) {
          mySerial.print('k');
          lcd.print("puede avanzar v");
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgds, HIGH);
          digitalWrite(sempasog3, HIGH);
          delay(7000);
          lcd.setCursor(0, 1);
          lcd.print("puede doblar >");
          digitalWrite(semgds, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semyds, HIGH);
            delay(500);
            digitalWrite(semyds, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, HIGH);
          digitalWrite(semrds, HIGH);
          lcd.clear();
        }
      }
      else if (aleatorio = 4) {
        if (distancia4 < p) {
          mySerial.print('k');
          lcd.print("puede avanzar <");
          lcd.print("puede avanzar >");
          digitalWrite(semri, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semgi, HIGH);
          digitalWrite(semgd, HIGH);
          digitalWrite(sempasog4, HIGH);
          delay(7000);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(sempasoy4, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semyi, HIGH);
            digitalWrite(semrd, HIGH);
            delay(500);
            digitalWrite(semyi, LOW);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy4, LOW);          
          digitalWrite(semri, HIGH);
          digitalWrite(semrd, HIGH);
          digitalWrite(sempasor4, HIGH);
          lcd.clear();
        }
      }
    }
    while ((distancia1 < l and distancia2 < l) or (distancia1 < l and distancia3 < l) or (distancia1 < l and distancia4 < l) or (distancia2 < l and distancia3 < l) or (distancia2 < l and distancia4 < l) or (distancia3 < l and distancia4 < l)) {
      aleatorio = random(1, 5);
      if (mySerial.available()){
        recep=mySerial.read();
        mySerial.print('n');
        if(recep == 'a' or recep == 'b'){
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasoy2, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasoy4, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semyn, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(semys, LOW);
          digitalWrite(semrs, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semyd, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(semyi, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(semgdn, LOW);
          digitalWrite(semydn, LOW);
          digitalWrite(semrdn, LOW);
          digitalWrite(semgds, LOW);
          digitalWrite(semyds, LOW);
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog1, HIGH);
          digitalWrite(semgn, HIGH);
          digitalWrite(semgs, HIGH);
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 3);
          lcd.print("puede avanzar v");
          delay(7000);
          digitalWrite(sempasog1, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(sempasoy1, HIGH);
          for(x; x<4; x++){
            digitalWrite(semyn, HIGH);
            digitalWrite(semys, HIGH);
            delay(500);
            digitalWrite(semyn, LOW);
            digitalWrite(semys, LOW);
            delay(500);
          }
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, HIGH);
          digitalWrite(semrn, HIGH);
          digitalWrite(semrs, HIGH);
          lcd.clear();
        }
        else if(recep == 'c' or recep == 'd'){
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasoy2, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasoy4, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semyn, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(semys, LOW);
          digitalWrite(semrs, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semyd, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(semyi, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(semgdn, LOW);
          digitalWrite(semydn, LOW);
          digitalWrite(semrdn, LOW);
          digitalWrite(semgds, LOW);
          digitalWrite(semyds, LOW);
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog2, HIGH);
          digitalWrite(semgd, HIGH);
          digitalWrite(semgi, HIGH);
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 3);
          lcd.print("puede avanzar v");
          delay(7000);
          digitalWrite(sempasog2, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(sempasoy2, HIGH);
          for(x; x<4; x++){
            digitalWrite(semyd, HIGH);
            digitalWrite(semyi, HIGH);
            delay(500);
            digitalWrite(semyd, LOW);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          digitalWrite(sempasoy2, LOW);
          digitalWrite(sempasor2, HIGH);
          digitalWrite(semrd, HIGH);
          digitalWrite(semri, HIGH);
          lcd.clear();
        }
        else if(recep == 'e' or recep == 'f'){
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasoy2, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasoy4, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semyn, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(semys, LOW);
          digitalWrite(semrs, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semyd, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(semyi, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(semgdn, LOW);
          digitalWrite(semydn, LOW);
          digitalWrite(semrdn, LOW);
          digitalWrite(semgds, LOW);
          digitalWrite(semyds, LOW);
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog3, HIGH);
          digitalWrite(semgn, HIGH);
          digitalWrite(semgs, HIGH);
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 3);
          lcd.print("puede avanzar v");
          delay(7000);
          digitalWrite(sempasog3, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(sempasoy3, HIGH);
          for(x; x<4; x++){
            digitalWrite(semyn, HIGH);
            digitalWrite(semys, HIGH);
            delay(500);
            digitalWrite(semyn, LOW);
            digitalWrite(semys, LOW);
            delay(500);
          }
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, HIGH);
          digitalWrite(semrn, HIGH);
          digitalWrite(semrs, HIGH);
          lcd.clear();
        }
        else if(recep == 'g' or recep == 'h'){
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasoy2, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasoy4, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(semyn, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(semgs, LOW);
          digitalWrite(semys, LOW);
          digitalWrite(semrs, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semyd, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(semyi, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(semgdn, LOW);
          digitalWrite(semydn, LOW);
          digitalWrite(semrdn, LOW);
          digitalWrite(semgds, LOW);
          digitalWrite(semyds, LOW);
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog4, HIGH);
          digitalWrite(semgd, HIGH);
          digitalWrite(semgi, HIGH);
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 3);
          lcd.print("puede avanzar v");
          delay(7000);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(sempasoy4, HIGH);
          for(x; x<4; x++){
            digitalWrite(semyd, HIGH);
            digitalWrite(semyi, HIGH);
            delay(500);
            digitalWrite(semyd, LOW);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          digitalWrite(sempasoy4, LOW);
          digitalWrite(sempasor4, HIGH);
          digitalWrite(semrd, HIGH);
          digitalWrite(semri, HIGH);
          lcd.clear();
        }
      }
      digitalWrite(disttrig1, HIGH);
      delay(1);
      digitalWrite(disttrig1, LOW);
      tiempo1 = pulseIn(distecho1, HIGH);
      distancia1 = 0.01715 * tiempo1;
      digitalWrite(disttrig2, HIGH);
      delay(1);
      digitalWrite(disttrig2, LOW);
      tiempo2 = pulseIn(distecho2, HIGH);
      distancia2 = 0.01715 * tiempo2;
      digitalWrite(disttrig3, HIGH);
      delay(1);
      digitalWrite(disttrig3, LOW);
      tiempo3 = pulseIn(distecho3, HIGH);
      distancia3 = 0.01715 * tiempo3;
      digitalWrite(disttrig4, HIGH);
      delay(1);
      digitalWrite(disttrig4, LOW);
      tiempo4 = pulseIn(distecho4, HIGH);
      distancia4 = 0.01715 * tiempo4;
      if (aleatorio = 1) {
        if (distancia1 < p) {
          mySerial.print('k');
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 1);
          lcd.print("puede doblar >");
          lcd.setCursor(0,2);
          lcd.print("puede avanzar v");
          lcd.setCursor(0,3);
          lcd.print("puede doblar <");
          digitalWrite(semrn, LOW);
          digitalWrite(semrs, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgn, HIGH);
          digitalWrite(semgs, HIGH);
          digitalWrite(sempasog1, HIGH);
          delay(7000);
          digitalWrite(semgn, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semyn, HIGH);
            digitalWrite(semys, HIGH);
            delay(500);
            digitalWrite(semyn, LOW);
            digitalWrite(semys, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, HIGH);
          digitalWrite(semrn, HIGH);
          digitalWrite(semrs, HIGH);
          lcd.clear();
        }
        else if (distancia1 < j) {
          mySerial.print('k');
          lcd.print("puede avanzar ^");
          digitalWrite(semrdn, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgdn, HIGH);
          digitalWrite(semrn, HIGH);
          digitalWrite(sempasog1, HIGH);
          delay(7000);
          lcd.setCursor(0, 1);
          lcd.print("puede doblar <");
          digitalWrite(semgdn, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasoy1, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semydn, HIGH);
            digitalWrite(semyn, HIGH);
            delay(500);
            digitalWrite(semydn, LOW);
            digitalWrite(semyn, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy1, LOW);
          digitalWrite(sempasor1, HIGH);
          digitalWrite(semrdn, HIGH);
          digitalWrite(semrn, HIGH);
          lcd.clear();
        }
      }
      else if (aleatorio = 2) {
        if (distancia2 < p) {
          mySerial.print('k');
          lcd.print("puede avanzar >");
          lcd.print("puede avanzar <");
          digitalWrite(semrd, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semgd, HIGH);
          digitalWrite(semri, HIGH);
          digitalWrite(sempasog2, HIGH);
          delay(7000);
          digitalWrite(sempasog2, LOW);
          digitalWrite(semgd, LOW);
          digitalWrite(semgi, LOW);
          digitalWrite(sempasoy2, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semyd, HIGH);
            digitalWrite(semyi, HIGH);
            delay(500);
            digitalWrite(semyd, LOW);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy2, LOW);          
          digitalWrite(semrd, HIGH);
          digitalWrite(semri, HIGH);
          digitalWrite(sempasor2, HIGH);
          lcd.clear();
        }
      } 
      else if (aleatorio = 3) {
        if (distancia3 < p) {
          mySerial.print('k');
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 1);
          lcd.print("puede doblar >");
          lcd.setCursor(0,2);
          lcd.print("puede avanzar v");
          lcd.setCursor(0,3);
          lcd.print("puede doblar <");
          digitalWrite(semrs, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgs, HIGH);
          digitalWrite(semrs, HIGH);
          digitalWrite(sempasog3, HIGH);
          delay(7000);
          digitalWrite(semgs, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semys, HIGH);
            digitalWrite(semyn, HIGH);
            delay(500);
            digitalWrite(semys, LOW);
            digitalWrite(semyn, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, HIGH);
          digitalWrite(semrs, HIGH);
          digitalWrite(semrn, HIGH);
          lcd.clear();
        }
        else if (distancia1 < j) {
          mySerial.print('k');
          lcd.print("puede avanzar v");
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgds, HIGH);
          digitalWrite(sempasog3, HIGH);
          delay(7000);
          lcd.setCursor(0, 1);
          lcd.print("puede doblar >");
          digitalWrite(semgds, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semyds, HIGH);
            delay(500);
            digitalWrite(semyds, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, HIGH);
          digitalWrite(semrds, HIGH);
          lcd.clear();
        }
      }
      else if (aleatorio = 4) {
        if (distancia4 < p) {
          mySerial.print('k');
          lcd.print("puede avanzar <");
          lcd.print("puede avanzar >");
          digitalWrite(semri, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semgi, HIGH);
          digitalWrite(semgd, HIGH);
          digitalWrite(sempasog4, HIGH);
          delay(7000);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(sempasoy4, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semyi, HIGH);
            digitalWrite(semrd, HIGH);
            delay(500);
            digitalWrite(semyi, LOW);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy4, LOW);          
          digitalWrite(semri, HIGH);
          digitalWrite(semrd, HIGH);
          digitalWrite(sempasor4, HIGH);
          lcd.clear();
        }
      }
    }
    if (distancia1 < l and distancia2 > l and distancia3 > l and distancia4 > l) {
      if (distancia1 < p) {
        mySerial.print('k');
        lcd.print("puede avanzar ^");
        lcd.setCursor(0, 1);
        lcd.print("puede doblar >");
        lcd.setCursor(0,2);
        lcd.print("puede avanzar v");
        lcd.setCursor(0,3);
        lcd.print("puede doblar <");
        digitalWrite(semrn, LOW);
        digitalWrite(semrs, LOW);
        digitalWrite(sempasog1, LOW);
        digitalWrite(sempasog2, LOW);
        digitalWrite(sempasog3, LOW);
        digitalWrite(sempasog4, LOW);
        digitalWrite(sempasor1, LOW);
        digitalWrite(sempasor2, LOW);
        digitalWrite(sempasor3, LOW);
        digitalWrite(sempasor4, LOW);
        digitalWrite(semgn, HIGH);
        digitalWrite(semgs, HIGH);
        digitalWrite(sempasog1, HIGH);
        delay(7000);
        digitalWrite(semgn, LOW);
        digitalWrite(semgn, LOW);
        digitalWrite(sempasog1, LOW);
        digitalWrite(sempasoy1, HIGH);
        for (x; x < 4; x++) {
          digitalWrite(semyn, HIGH);
          digitalWrite(semys, HIGH);
          delay(500);
          digitalWrite(semyn, LOW);
          digitalWrite(semys, LOW);
          delay(500);
        }
        x = 0;
        digitalWrite(sempasoy1, LOW);
        digitalWrite(sempasor1, HIGH);
        digitalWrite(semrn, HIGH);
        digitalWrite(semrs, HIGH);
        lcd.clear();
      }
      else if (distancia1 < j) {
        mySerial.print('k');
        lcd.print("puede avanzar ^");
        digitalWrite(semrdn, LOW);
        digitalWrite(semrn, LOW);
        digitalWrite(sempasog1, LOW);
        digitalWrite(sempasog2, LOW);
        digitalWrite(sempasog3, LOW);
        digitalWrite(sempasog4, LOW);
        digitalWrite(sempasor1, LOW);
        digitalWrite(sempasor2, LOW);
        digitalWrite(sempasor3, LOW);
        digitalWrite(sempasor4, LOW);
        digitalWrite(semgdn, HIGH);
        digitalWrite(semrn, HIGH);
        digitalWrite(sempasog1, HIGH);
        delay(7000);
        lcd.setCursor(0, 1);
        lcd.print("puede doblar <");
        digitalWrite(semgdn, LOW);
        digitalWrite(semgn, LOW);
        digitalWrite(sempasog1, LOW);
        digitalWrite(sempasoy1, HIGH);
        for (x; x < 4; x++) {
          digitalWrite(semydn, HIGH);
          digitalWrite(semyn, HIGH);
          delay(500);
          digitalWrite(semydn, LOW);
          digitalWrite(semyn, LOW);
          delay(500);
        }
        x = 0;
        digitalWrite(sempasoy1, LOW);
        digitalWrite(sempasor1, HIGH);
        digitalWrite(semrdn, HIGH);
        digitalWrite(semrn, HIGH);
        lcd.clear();
      }
    }
    else if (distancia2 < l and distancia1 > l and distancia3 > l and distancia4 > l) {
      if (distancia2 < p) {
        mySerial.print('k');
        lcd.print("puede avanzar >");
        lcd.print("puede avanzar <");
        digitalWrite(semrd, LOW);
        digitalWrite(semri, LOW);
        digitalWrite(sempasor1, LOW);
        digitalWrite(sempasor2, LOW);
        digitalWrite(sempasor3, LOW);
        digitalWrite(sempasor4, LOW);
        digitalWrite(sempasog1, LOW);
        digitalWrite(sempasog2, LOW);
        digitalWrite(sempasog3, LOW);
        digitalWrite(sempasog4, LOW);
        digitalWrite(semgd, HIGH);
        digitalWrite(semri, HIGH);
        digitalWrite(sempasog2, HIGH);
        delay(7000);
        digitalWrite(sempasog2, LOW);
        digitalWrite(semgd, LOW);
        digitalWrite(semgi, LOW);
        digitalWrite(sempasoy2, HIGH);
        for (x; x < 4; x++) {
          digitalWrite(semyd, HIGH);
          digitalWrite(semyi, HIGH);
          delay(500);
          digitalWrite(semyd, LOW);
          digitalWrite(semyi, LOW);
          delay(500);
        }
        x = 0;
        digitalWrite(sempasoy2, LOW);          
        digitalWrite(semrd, HIGH);
        digitalWrite(semri, HIGH);
        digitalWrite(sempasor2, HIGH);
        lcd.clear();
      }
    }
    else if (distancia3 < l and distancia1 > l and distancia2 > l and distancia4 > l) {
        if (distancia3 < p) {
          mySerial.print('k');
          lcd.print("puede avanzar ^");
          lcd.setCursor(0, 1);
          lcd.print("puede doblar >");
          lcd.setCursor(0,2);
          lcd.print("puede avanzar v");
          lcd.setCursor(0,3);
          lcd.print("puede doblar <");
          digitalWrite(semrs, LOW);
          digitalWrite(semrn, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgs, HIGH);
          digitalWrite(semrs, HIGH);
          digitalWrite(sempasog3, HIGH);
          delay(7000);
          digitalWrite(semgs, LOW);
          digitalWrite(semgn, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semys, HIGH);
            digitalWrite(semyn, HIGH);
            delay(500);
            digitalWrite(semys, LOW);
            digitalWrite(semyn, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, HIGH);
          digitalWrite(semrs, HIGH);
          digitalWrite(semrn, HIGH);
          lcd.clear();
        }
        else if (distancia1 < j) {
          mySerial.print('k');
          lcd.print("puede avanzar v");
          digitalWrite(semrds, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(semgds, HIGH);
          digitalWrite(sempasog3, HIGH);
          delay(7000);
          lcd.setCursor(0, 1);
          lcd.print("puede doblar >");
          digitalWrite(semgds, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasoy3, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semyds, HIGH);
            delay(500);
            digitalWrite(semyds, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy3, LOW);
          digitalWrite(sempasor3, HIGH);
          digitalWrite(semrds, HIGH);
          lcd.clear();
        }
      }
      else if (aleatorio = 4) {
        if (distancia4 < p) {
          mySerial.print('k');
          lcd.print("puede avanzar <");
          lcd.print("puede avanzar >");
          digitalWrite(semri, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semgi, HIGH);
          digitalWrite(semgd, HIGH);
          digitalWrite(sempasog4, HIGH);
          delay(7000);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(sempasoy4, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semyi, HIGH);
            digitalWrite(semrd, HIGH);
            delay(500);
            digitalWrite(semyi, LOW);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy4, LOW);          
          digitalWrite(semri, HIGH);
          digitalWrite(semrd, HIGH);
          digitalWrite(sempasor4, HIGH);
          lcd.clear();
        }
      }
    }
    else if (distancia4 < l and distancia1 > l and distancia2 > l and distancia3 > l) {
        if (distancia4 < p) {
          mySerial.print('k');
          lcd.print("puede avanzar <");
          lcd.print("puede avanzar >");
          digitalWrite(semri, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(sempasor1, LOW);
          digitalWrite(sempasor2, LOW);
          digitalWrite(sempasor3, LOW);
          digitalWrite(sempasor4, LOW);
          digitalWrite(sempasog1, LOW);
          digitalWrite(sempasog2, LOW);
          digitalWrite(sempasog3, LOW);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semgi, HIGH);
          digitalWrite(semgd, HIGH);
          digitalWrite(sempasog4, HIGH);
          delay(7000);
          digitalWrite(sempasog4, LOW);
          digitalWrite(semrd, LOW);
          digitalWrite(semri, LOW);
          digitalWrite(sempasoy4, HIGH);
          for (x; x < 4; x++) {
            digitalWrite(semyi, HIGH);
            digitalWrite(semrd, HIGH);
            delay(500);
            digitalWrite(semyi, LOW);
            digitalWrite(semyi, LOW);
            delay(500);
          }
          x = 0;
          digitalWrite(sempasoy4, LOW);          
          digitalWrite(semri, HIGH);
          digitalWrite(semrd, HIGH);
          digitalWrite(sempasor4, HIGH);
          lcd.clear();
        }
      }
    }
  }
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

  digitalWrite(sempasog1, LOW);
  digitalWrite(sempasoy1, LOW);
  digitalWrite(sempasor1, HIGH);
  digitalWrite(sempasog2, LOW);
  digitalWrite(sempasoy2, LOW);
  digitalWrite(sempasor2, HIGH);
  digitalWrite(sempasog3, LOW);
  digitalWrite(sempasoy3, LOW);
  digitalWrite(sempasor3, HIGH);
  digitalWrite(sempasog4, LOW);
  digitalWrite(sempasoy4, LOW);
  digitalWrite(sempasor4, HIGH);
  
  lcd.print("Vehiculo de");
  lcd.setCursor(0, 1);
  lcd.print("emergecia");
  delay(5000);
}