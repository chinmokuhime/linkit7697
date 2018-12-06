# inclide <DHT.h>
# include <LiquidCrystal_I2C.h>

DHT dht(4, DHT11);
LiquidCrystal_I2C lcd_i2c(0x27);

void setup(){
  Serial.begin(9600);
  dht.begin();
  lcd_i2c.begin(16, 2);
  pinMode(3, INPUT);
  lcd_i2c.clear();
}

void loop(){
  Serial.print("temp");
  Serial.println(dht.readTemperature());
}
