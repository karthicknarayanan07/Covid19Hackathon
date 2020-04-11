#include<ESP8266WiFi.h>
Const char* ssid = “wifiname”;
Const char*password= “123”;
Float temp_ celsius = 0;
Float temp_ fharenheit = 0;
WiFiServer server(80);
Void setup()
{
Serial.begin(115200);
PinMode(A0,INPUT);
Serial.println();
Serial.println();
Serial.print(“connecting to “);
Serial.println(ssid);
WiFi.begin(ssid,password);
While(WiFi status()!= WLCONNECTED)
}
Delay(500);
Serial.print(“.”);
}
Serial.print(“.”);
Serial.println(“WiFi is connected”);
Server.begin();
Serial.println(“server started”);
Serial.println(WiFi.locallp());
}
Void loop()
{
temp-celsius = (analogRead(AD)*330.0/1023.0;
temp_fahrenheit = Celsius * 1.8 + 32.0;
serial.print(“Temperature = “);
serial.temp(temp_celsius);
serial.print(“Celsius”);
serial.print(temp_ fahrenheit);
WiFiClient client = server.available();
Client.println(“HTTP/1.1 200 OK”0;
Client.println(“content-Type:text/html”);
Client.println(“connection: close”);
Client.println(“Refresh: 10”);
Client.println();
Client.println(“<!DOCTYPE HTML>”);
Client.println(“html>”);
Client.println(“<p style=’text-align: center;’><span style=’font-size: x-large;><strong>Digital Thermometer</strong></span><\p>”);
Client.println(“<p style=’text-align: center;’><span style=’color: #0000ff;’><strong style=’font-size: large;’>Temperature (*c)= “);
Client.println(“<p style=’text-align: center;’><span style=’color: #0000ff;’><strong style=’font-size: large;’>Temperature (*f)= “);
Client.println(temp_celsius);
Client.println(“<p style=’text-align: center;’><span style=’color: #0000ff;’><strong style=’font-size: large;’>Temperature (*f)= “);
Client.println(temp_fahrenheit);
Client.print(“</p>”);
Client.print(“</html>”);
delay(5000);
}
