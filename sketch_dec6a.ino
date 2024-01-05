// Program untuk membaca suhu dan kelembaban dari sensor DHT11 dan menampilkan nilai ke Serial Monitor

#include <DHT.h>

#define DHTPIN 2       
#define DHTTYPE DHT11  

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);  
  dht.begin();        
}

void loop() 
  float suhu = dht.readTemperature();
  float kelembaban = dht.readHumidity();

  
  Serial.print("Suhu: ");
  Serial.print(suhu);
  Serial.print(" °C\t");

  Serial.print("Kelembaban: ");
  Serial.print(kelembaban);
  Serial.println(" %");

  delay(2000); 
}
