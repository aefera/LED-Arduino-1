#include <Arduino.h>

//Deklarasi pin led
//medeklarasikan variabel konstanta integer untuk menyiapkan pin LED
const int ledMerah = 8;
const int ledKuning = 9;
const int ledHijau = 10;

void setup() {

  //mengatur pin2 yang dihubungkan ke LED sebagai OUTPUT
  //hal ini berarti pin2 tersebut dapat digunakan untuk mengendalikan led
  pinMode(ledMerah, OUTPUT);
  pinMode(ledKuning, OUTPUT);
  pinMode(ledHijau, OUTPUT);
}

void loop() {
  // LED Merah
  //menyalakan led merah selama 2 detik, kemudian mematikannya
  digitalWrite(ledMerah, HIGH);
  delay(2000);
  digitalWrite(ledMerah, LOW);

  // LED Kuning
  //menyalakan led kuning selama 2 detik, kemudian mematikannya
  digitalWrite(ledKuning, HIGH);
  delay(2000);
  digitalWrite(ledKuning, LOW);

  // LED Hijau
  //menyalakan led hijau selama 2 detik, kemudian mematikannya
  digitalWrite(ledHijau, HIGH);
  delay(2000);
  digitalWrite(ledHijau, LOW);
}