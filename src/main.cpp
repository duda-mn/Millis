
// Explicação millis()
// #define pinLed 2
//
// bool estadoLed = 0;
//
// unsigned long tempoAnterior = 0;
// unsigned long intervalo = 500;
//
// void setup() {
//   pinMode(pinLed, OUTPUT);
// }
//
// void loop() {
//   unsigned long tempoAtual = millis();
//
//   if(tempoAtual - tempoAnterior >= intervalo){
//
//     estadoLed = !estadoLed;
//
//     tempoAnterior = tempoAtual;
//   }
//
//   digitalWrite(pinLed, estadoLed);
// }

// 1. Dois leds de forma alternada
//  #include <Arduino.h>

// #define Led1 4
// #define Led2 18

// bool estadoLed1 = 1;
// bool estadoLed2 = 0;

// unsigned long tempoAnt = 0; //long = variavel com maior qtd. do esp //unsigned = apenas n° positivos
// unsigned long intervalo = 500;

// void setup() {
//   pinMode(Led1, OUTPUT);
//   pinMode(Led2, OUTPUT);
//   Serial.begin(115200);

// }

// void loop() {
//   unsigned long tempoAtual = millis();
//   Serial.println(tempoAtual);

// if (tempoAtual - tempoAnt >= intervalo)
// {
//   estadoLed1=!estadoLed1;
//   estadoLed2=!estadoLed2;

//   tempoAnt=tempoAtual;
// }

// digitalWrite(Led1, estadoLed1);
// digitalWrite(Led2, estadoLed2);

// }

// 2. um led a caa 500ms, outro a cada 2s

// #include <Arduino.h>

// #define Led1 4
// #define Led2 18

// bool estadoLed1 = 0;
// bool estadoLed2 = 0;

// unsigned long tempoAnt = 0; //long = variavel com maior qtd. do esp //unsigned = apenas n° positivos
// unsigned long tempoAnt2 = 0; //long = variavel com maior qtd. do esp //unsigned = apenas n° positivos
// unsigned long intervalo1 = 500;
// unsigned long intervalo2 = 2000;

// void setup() {
//   pinMode(Led1, OUTPUT);
//   pinMode(Led2, OUTPUT);
//   Serial.begin(115200);

// }

// void loop() {
//   unsigned long tempoAtual = millis();
//   Serial.println(tempoAtual);

// if (tempoAtual - tempoAnt >= intervalo1)
// {
//   estadoLed1=!estadoLed1;
//   tempoAnt=tempoAtual;
// }

// if (tempoAtual - tempoAnt2 >= intervalo2)
// {
//   estadoLed2=!estadoLed2;
//   tempoAnt2=tempoAtual;
// }

// digitalWrite(Led1, estadoLed1);
// digitalWrite(Led2, estadoLed2);
// }

// 3. mensagem no serial a cada 2s

// #include <Arduino.h>

// #define Led1 4
// #define Led2 18

// bool estadoLed1 = 0;
// bool estadoLed2 = 0;

// unsigned long tempoAnt = 0; //long = variavel com maior qtd. do esp //unsigned = apenas n° positivos
// unsigned long intervalo = 2000;

// void setup() {
//   pinMode(Led1, OUTPUT);
//   Serial.begin(115200);

// }

// void loop() {
//   unsigned long tempoAtual = millis();

// if (tempoAtual - tempoAnt >= intervalo)
// {
//   Serial.print("Contagem: ");
//   Serial.println(tempoAtual);
//   estadoLed1=!estadoLed1;
//   tempoAnt=tempoAtual;
// }

// digitalWrite(Led1, estadoLed1);

// 4. pressiona o botão, acende led e apague dps de 3s
//  #include <Arduino.h>
//  #include <Bounce2.h>
//  Bounce btn = Bounce();

// #define Led1 4
// #define botao 23

// bool estadoLed = 0;

// unsigned long tempoAnt = 0; //long = variavel com maior qtd. do esp //unsigned = apenas n° positivos
// unsigned long intervalo = 3000;

// void setup() {
//   pinMode(Led1, OUTPUT);
//   pinMode(botao, INPUT_PULLUP);
//   btn.attach(botao, INPUT_PULLUP);
//   Serial.begin (115200);
// }

// void loop() {
//   unsigned long tempoAtual = millis();

//   btn.update();
//   Serial.println(tempoAtual);

//   if (btn.fell()){
//     estadoLed = HIGH;
//     tempoAnt = tempoAtual;
//   }
  
//   if(btn.read() == HIGH && tempoAtual - tempoAnt >= intervalo){
//     estadoLed = LOW;
    
//     tempoAnt = tempoAtual;
//   }
  
//   digitalWrite(Led1, estadoLed);
// }

// 5. Crie um semaforo

// #include <Arduino.h>

// #define Led1 4
// #define Led2 18
// #define Led3 22

// int estadoSem = 0;
// bool estadoLed1 = 0;
// bool estadoLed2 = 0;
// bool estadoLed3 = 0;

// unsigned long tempoAnt = 0; // long = variavel com maior qtd. do esp //unsigned = apenas n° positivos
// unsigned long intervalo1 = 5000;
// unsigned long tempoAnt2 = 0; // long = variavel com maior qtd. do esp //unsigned = apenas n° positivos
// unsigned long intervalo2 = 2000;
// unsigned long tempoAnt3 = 0; // long = variavel com maior qtd. do esp //unsigned = apenas n° positivos
// unsigned long intervalo3 = 5000;

// void setup()
// {
//   pinMode(Led1, OUTPUT);
//   pinMode(Led2, OUTPUT);
//   pinMode(Led3, OUTPUT);
//   Serial.begin(115200);
// }

// void loop()
// {

//   unsigned long tempoAtual = millis();
//   if (estadoSem == 0 && tempoAtual - tempoAnt >= intervalo1)
//   {
//     Serial.println(estadoSem);
//     estadoSem = 1;
//     tempoAnt = tempoAtual;
//   }
//   if (estadoSem == 1 && tempoAtual - tempoAnt >= intervalo2)
//   {
//     Serial.println(estadoSem);
//     estadoSem = 2;
//     tempoAnt = tempoAtual;
//   }
//   if (estadoSem == 2 && tempoAtual - tempoAnt >= intervalo3)
//   {
//     Serial.println(estadoSem);
//     estadoSem = 0;
//     tempoAnt = tempoAtual;
//   }




//   if (estadoSem == 0)
//   {
//     digitalWrite(Led1, HIGH);
//     digitalWrite(Led2, LOW);
//     digitalWrite(Led3, LOW);
//   }

//   if (estadoSem == 1)
//   {
//     digitalWrite(Led1, LOW);
//     digitalWrite(Led2, HIGH);
//     digitalWrite(Led3, LOW);
//   }

//   if (estadoSem == 2)
//   {
//     digitalWrite(Led1, LOW);
//     digitalWrite(Led2, LOW);
//     digitalWrite(Led3, HIGH);
//   }
// }
