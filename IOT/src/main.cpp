#include <Ardiano.h> // Wajib untuk PlatformIO + ESP32
// Deklarasi Pin LED
int lampu = 26;
int lampu2 = 33;
int lampu3 =14;

void setup () {
   Serial.begin(115200); // inisialisasi komunikasi Serial
   Serial.println("ESP32 Blinking LED");

   //atur pin sebagai output
   pinMode(lampu, OUTPUT)
   pinMode(lampu2, OUTPUT)
    pinMode(lampu3, OUTPUT)
}

void loop() {
  // Nyalakan kedua LED
   digitalWrite(lampu, HIGH);
   digitalWrite(lampu2, HIGH);
   digitalWrite(lampu3, HIGH);
   Serial.println("LED ON");
  
   delay(500); // Tunggu 0,5 detik 

   // Matikan ketiga LED 
   digitalWrite(lampu, LOW);
   digitalWrite(lampu2, LOW);
   digitalWrite(lampu3, LOW);
   Serial.println("LED OFF")

   delay(500);
}