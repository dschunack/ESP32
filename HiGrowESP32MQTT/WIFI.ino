void connectWiFi()
{
  int count = 0;
  esp_wifi_start();
  delay(200);
  Serial.print("Connecting to ");
  Serial.println(mySSID);
  WiFi.begin(mySSID, myPW);
  WiFi.setHostname(deviceid);
  
  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(100);
    Serial.print(".");
    count++;
    if (count > 25) ESP.restart();
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

