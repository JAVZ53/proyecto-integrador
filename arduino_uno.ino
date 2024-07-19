
#include <SoftwareSerial.h>

int boto1 ;
int boto2 ;
int boto3 ;
int boto4 ;
int boto5 ;
int boto6 ;
int boto7 ;
int boto8 ;

char recep ;
char guar = 'n' ;

SoftwareSerial mySerial(10, 11);

#define led 13

#define bot1 2
#define bot2 3
#define bot3 4
#define bot4 5
#define bot5 6
#define bot6 7
#define bot7 8
#define bot8 9

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(led, OUTPUT);

  pinMode(bot1, INPUT);
  pinMode(bot2, INPUT);
  pinMode(bot4, INPUT);
  pinMode(bot3, INPUT);
  pinMode(bot5, INPUT);
  pinMode(bot6, INPUT);
  pinMode(bot7, INPUT);
  pinMode(bot8, INPUT);

}

void loop() {
  boto1=digitalRead(bot1);
  boto2=digitalRead(bot2);
  boto3=digitalRead(bot3);
  boto4=digitalRead(bot4);
  boto5=digitalRead(bot5);
  boto6=digitalRead(bot6);
  boto7=digitalRead(bot7);
  boto8=digitalRead(bot8);
  if(boto1 == HIGH){
    mySerial.write('a');
  }
  else if(boto2 == HIGH){
    mySerial.write('b');
  }
  else if(boto3 == HIGH){
    mySerial.write('c');
  }
  else if(boto4 == HIGH){
    mySerial.write('d');
  }
  else if(boto5 == HIGH){
    mySerial.write('e');
  }
  else if(boto6 == HIGH){
    mySerial.write('f');
  }
  else if(boto7 == HIGH){
    mySerial.write('g');
  }
  else if(boto8 == HIGH){
    mySerial.write('h');
  }
  if (mySerial.available()){
    recep=mySerial.read();
    if(recep=='k'){
      if(boto1 == HIGH){
        guar='a';
      }
      else if(boto2 == HIGH){
        guar='b';
      }
      else if(boto3 == HIGH){
        guar='c';
      }
      else if(boto4 == HIGH){
        guar='d';
      }
      else if(boto5 == HIGH){
        guar='e';
      }
      else if(boto6 == HIGH){
        guar='f';
      }
      else if(boto7 == HIGH){
        guar='g';
      }
      else if(boto8 == HIGH){
        guar='h';
      }
      while(guar != 'n'){
        mySerial.write(guar);
        if(mySerial.available()){
          guar=mySerial.read();
        }
      }

    }
  } 
}
