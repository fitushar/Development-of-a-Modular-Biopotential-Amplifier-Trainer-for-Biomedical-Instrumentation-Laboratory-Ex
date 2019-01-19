float sensor1=A0;
float sensor2=A1;
float gas_value1;
float gas_value2;
void setup()
{

pinMode(sensor1,INPUT);
pinMode(sensor2,INPUT);
Serial.begin(9600);

}

void loop()
{

gas_value1=analogRead(sensor1);
gas_value2=analogRead(sensor2);

Serial.println(gas_value1);
Serial.println(gas_value2);
delay(10000);
}

