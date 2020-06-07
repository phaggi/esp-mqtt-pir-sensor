/*
 Программа разработана Игорем Ярком (Igor Jarc)
 Подробнее смотрите по ссылке http://iot-playground.com
 Пожалуйста, не нужно связываться с автором напрямую,
 делайте это через форум на вебсайте.
 
 Программа бесплатна. Ее можно повторно распространять
 и/или модифицировать согласно правилам лицензии
 GNU General Public License, опубликованной Фондом свободного ПО.
*/
#define REPORT_INTERVAL 10
#define MIN_VALUE 25
#define MAX_VALUE 800
 
#define SENSOR_PIN A0    // выберите входной контакт,
                         // к которому подключен потенциометр
  
int sensorValue = 0;
 

void setup() {
    Serial.begin(9600);
}
void loop() {
  sensorValue = analogRead(SENSOR_PIN);
  float level = 100 - ((sensorValue - MIN_VALUE) * 100 / (MAX_VALUE - MIN_VALUE));
 
  sensorValue = level;
  delay(1000 * 10 * REPORT_INTERVAL);}
