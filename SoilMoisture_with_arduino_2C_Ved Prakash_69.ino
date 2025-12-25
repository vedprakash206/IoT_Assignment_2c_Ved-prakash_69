int sensor_pin= A3;
void setup(){
  pinMode(A3,INPUT);
  Serial.begin(9600);

}
void loop(){
  int sensor_value=analogRead(A3);
  Serial.print("Moisture value is:");
  Serial.println(sensor_value);
  if(sensor_value<=100){
    Serial.println("Soil is Dry.. Water it");
  }else
  {
    Serial.println("Soil is Wet.. No Water Needed");
  
  }
 
}
