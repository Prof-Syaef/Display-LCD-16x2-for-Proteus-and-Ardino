// Menampilkan Display pada LCD 2x16 dengan menggunakan Arduino UNO R3
// Menyalakan LED dengan Aktif HIGH
// Memamatikan LED dengan LOW


#include <LiquidCrystal.h>// library lcd
#define LED 5 // inialisasi pin digital 5
#define LED1 A5// inialisasi pin Analog A5
int RS = 13, E = 12, D4 = 11, D5 = 10, D6 = 9, D7 =8;// inialisasi for lcd 2x16
LiquidCrystal lcd(RS,E,D4,D5,D6,D7); // library lcd

void setup(){
lcd.begin(16,2); // untuk layar lcd 2 x 16
pinMode (LED, OUTPUT); // LED pin Digital 5
pinMode (LED1, OUTPUT);// LED pin Analog A5
}

void loop()
{
  //LED DIGITAL
digitalWrite (LED, HIGH);     // membaca LED pin Digital dengan logika HIGH atau LED dalam keadaan Hidup
lcd.setCursor(2,0);          //set kursor pada LCD, 2 sebagi kolom dan 0 sebagi baris. artiya kursor berada di kolom 2 dan baris pertma
lcd.println("LED DIGITAL");  // akan menampilkan di LCD degan geser ke kanan sebanyak 2 kolom dan text akan menampilkan dibaris pertama
delay(1000);                  // memberi waktu menampilkan text dan menyalakan LED selama 1000ms  
digitalWrite(LED, LOW);     // membaca LED pin Digital dengan logika LOW atau LED dalam keadaan MATI
lcd.setCursor(2,0);         //set kursor pada LCD, 2 sebagi kolom dan 0 sebagi baris. artiya kursor berada di kolom 2 dan baris pertma
lcd.println("         ");   // sebagai penghapus / clear text "LED DIGITAL"

// LED ANALOG. analisa sama dengan LED Digital
digitalWrite (LED1, HIGH);
lcd.setCursor(4,1);
lcd.println("LED ANALOG");
delay(1000);
digitalWrite(LED1, LOW);
lcd.setCursor(4,1);
lcd.println("         ");
}
