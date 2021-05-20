void clrRainWind() {
  rainTotalVal = 0;
  srainTotalVal = String(rainTotalVal);
  writeFile(SPIFFS, "/rainTotalVal.txt", srainTotalVal.c_str());
  windSpeedTotalVal = 0;
  swindSpeedTotalVal = String(windSpeedTotalVal);
  writeFile(SPIFFS, "/windTotalVal.txt", swindSpeedTotalVal.c_str());
}

void showSensor() {
  if(serialStatus){
    Serial.println(F("************************"));
    Serial.print(F("Send Count: "));
    Serial.println(sendCountVal);
    Serial.print(F("Date: "));
    Serial.println(sdatenowVal);
    Serial.print(F("Time: "));
    Serial.println(stimenowVal);
    
    Serial.print(F("Battery (C0): "));
    Serial.println(sbatteryVal);
    Serial.print(F("Irradiance (C1): "));
    Serial.println(sirradianceVal);
    Serial.print(F("Air Pressure (C2): "));
    Serial.println(sairpressureVal);
    Serial.print(F("BMP Temperature (C3): "));
    Serial.println(stemperatureBmpVal);
    Serial.print(F("RTC Temperature (C4): "));
    Serial.println(stemperatureRtcVal);
    Serial.print(F("HDC Temperature (C5): "));
    Serial.println(stemperatureHdcVal);
    Serial.print(F("HDC Humidity (C6): "));
    Serial.println(shumidityHdcVal);
  
    Serial.print(F("Rainfall (C7): "));
    Serial.println(srainVal);
    Serial.print(F("Wind Speed (C8): "));
    Serial.println(swindSpeedVal);
    Serial.print(F("Wind Direction (C9): "));
    Serial.println(swindDirectionVal);
    Serial.print(F("Ultrasonic A (C10): "));
    Serial.println(sultrasonicAVal);
    Serial.print(F("Water Level A (C11): "));
    Serial.println(swaterLevelAVal);
    Serial.print(F("Ultrasonic B (C12): "));
    Serial.println(sultrasonicBVal);
    Serial.print(F("Water Level B (C13): "));
    Serial.println(swaterLevelBVal);
    Serial.print(F("Unixtime (C14): "));
    Serial.println(sunixnowVal);
    Serial.println(F("************************"));
  }
}

void updateSensor() {
  if(serialStatus){
    Serial.println("Sensor: Update");
  }
  sbatCalibVal = String(fbatCalibVal);
  ssendCountVal = String(sendCountVal);

  getDateTimenow();
  getBattery();
  getIrradiance();
  getPressure();
  getTempBMP();
  getTempRTC();
  getTempHDC();
  getHumHDC();
  getRainfall();
  getWindSpeed();
  getWindDirection();
  getUltrasonicA();
  getUltrasonicB();
}

String getADCBattery() {
  int16_t adcx;
  adcVal = 0;
  for(int i=0; i<=9; i++){
    if (bmpStatus) {
      adcx = ads.readADC_SingleEnded(0);
    } else {
      adcx = analogRead(windPin);
    }
    adcVal = adcVal + adcx;
  }
  adcVal = adcVal / 10;
}

String getBattery() {
  int16_t adc0;
  adcVal = 0;
  for(int i=0; i<=9; i++){
    if (bmpStatus) {
      adc0 = ads.readADC_SingleEnded(0);
    } else {
      adc0 = analogRead(windPin);
    }
    adcVal = adcVal + adc0;
  }
  adcVal = adcVal / 10;
  fbatteryVal = (float)adcVal / fbatCalibVal;
  sbatteryVal = String(fbatteryVal);
}

String getIrradiance() {
  int16_t adc1;
  if (bmpStatus) {
    adc1 = ads.readADC_SingleEnded(1);
    firradianceVal = pow(adc1 / 5357.7582, 2) * 10000 / 3.75;
  } else {
    firradianceVal = 0;
  }
  sirradianceVal = String(firradianceVal);
}

String getPressure() {
  if (bmpStatus) {
    sensors_event_t pressure_event;
    bmp_pressure->getEvent(&pressure_event);
    fairpressureVal = pressure_event.pressure;
  } else {
    fairpressureVal = 0;
  }
  sairpressureVal = String(fairpressureVal);
}

String getTempBMP() {
  if (bmpStatus) {
    sensors_event_t temp_event;
    bmp_temp->getEvent(&temp_event);
    ftemperatureBmpVal = temp_event.temperature;
  } else {
    ftemperatureBmpVal = 0;
  }
  stemperatureBmpVal = String(ftemperatureBmpVal);
}

String getTempRTC() {
  if (rtcStatus) {
    ftemperatureRtcVal = rtc.getTemperature();
  } else {
    ftemperatureRtcVal = 0;
  }
  stemperatureRtcVal = String(ftemperatureRtcVal);
}

String getTempHDC() {
  if (bmpStatus) {
    ftemperatureHdcVal = hdc1080.readTemperature();
  } else {
    ftemperatureHdcVal = 0;
  }
  stemperatureHdcVal = String(ftemperatureHdcVal);
}

String getHumHDC() {
  if (bmpStatus) {
    fhumidityHdcVal = hdc1080.readHumidity();
  } else {
    fhumidityHdcVal = 0;
  }
  shumidityHdcVal = String(fhumidityHdcVal);
}

String getRainfall() {
  if (!bmpStatus || rainVal < 1) {
    rainVal = 0;
  }
  rainTotalVal = readFile(SPIFFS, "/rainTotalVal.txt").toInt();
  rainVal = rainVal + rainTotalVal;
  srainVal = String(rainVal);
  writeFile(SPIFFS, "/rainTotalVal.txt", srainVal.c_str());

  //if (sendCountVal > sendTimeVals) {
  if (sendStatus) {
    float frainVal = (float)rainVal * 0.2794;
    srainVal = String(frainVal);
    rainTotalVal = 0;
    srainTotalVal = String(rainTotalVal);
    writeFile(SPIFFS, "/rainTotalVal.txt", srainTotalVal.c_str());
  }
}

String getWindSpeed() {
  if (!bmpStatus || windSpeedVal < 1) {
    windSpeedVal = 0;
  }
  windSpeedTotalVal = readFile(SPIFFS, "/windTotalVal.txt").toInt();
  windSpeedVal = windSpeedVal + windSpeedTotalVal;
  swindSpeedVal = String(windSpeedVal);
  writeFile(SPIFFS, "/windTotalVal.txt", swindSpeedVal.c_str());

  //if (sendCountVal > sendTimeVals) {
  if(sendStatus){
    float fwindSpeedVal = (float)windSpeedVal / 125; //300 * 2.4;
    swindSpeedVal = String(fwindSpeedVal);
    windSpeedTotalVal = 0;
    swindSpeedTotalVal = String(windSpeedTotalVal);
    writeFile(SPIFFS, "/windTotalVal.txt", swindSpeedTotalVal.c_str());
  }
}

String getWindDirection() {
  int16_t adc2;
  if (bmpStatus) {
    adc2 = ads.readADC_SingleEnded(2);
    windDirectionVal = adc2;
    //Serial.print("ADC Wind: ");
    //Serial.println(windDirectionVal);
  } else {
    windDirectionVal = 0;
  }
  // n      ne     e     se    s     sw     w      nw
  // 15536; 11312; 3120; 5680; 8096; 13728; 17072; 16544
  if (windDirectionVal > 15000 && windDirectionVal <= 16000) {
    windDirectionVal = 1;
  } else if (windDirectionVal > 10000 && windDirectionVal <= 12000) {
    windDirectionVal = 2;
  } else if (windDirectionVal > 3000 && windDirectionVal <= 4000) {
    windDirectionVal = 3;
  } else if (windDirectionVal > 5000 && windDirectionVal <= 6000) {
    windDirectionVal = 4;
  } else if (windDirectionVal > 7000 && windDirectionVal <= 9000) {
    windDirectionVal = 5;
  } else if (windDirectionVal > 12500 && windDirectionVal <= 14500) {
    windDirectionVal = 6;
  } else if (windDirectionVal > 16000 && windDirectionVal <= 18000) {
    windDirectionVal = 7;
  } else if (windDirectionVal > 15000 && windDirectionVal <= 17000) {
    windDirectionVal = 8;
  } else {
    windDirectionVal = 0;
  }
  swindDirectionVal = String(windDirectionVal);
}

String getUltrasonicA() {
  if (bmpStatus) {
    ultrasonicAVal = 0;
  } else {
//    digitalWrite(ultrasonicT1Pin, LOW);
//    delayMicroseconds(2);
//    digitalWrite(ultrasonicT1Pin, HIGH);
//    delayMicroseconds(20);
//    digitalWrite(ultrasonicT1Pin, LOW);
//    ultrasonicAVal = pulseIn(ultrasonicE1Pin, HIGH, 26000);
//    ultrasonicAVal = ultrasonicAVal / 58;
    ultrasonicAVal = 0;
  }
  sultrasonicAVal = String(ultrasonicAVal);
  waterLevelAVal = ultrasonicGroundAVal - ultrasonicAVal;
  swaterLevelAVal = String(waterLevelAVal);
}

String getUltrasonicB() {
  if (bmpStatus) {
    ultrasonicBVal = 0;
  } else {
    ultrasonicBVal = readUltrasonicB();
  }
  int acc = 0;
  int counter = 0;
  if (ultrasonicBVal <= 0){
    for (int i=0; i<3; i++){
      ultrasonicBVal = readUltrasonicB();
      if (ultrasonicBVal !=0){
        acc =+ ultrasonicBVal;
        counter++;
      }
    }
    if (counter != 0){
      ultrasonicBVal = acc / counter;
    } else {
      ultrasonicBVal = 0;
    }
  }
  sultrasonicBVal = String(ultrasonicBVal);
  lastWaterLevelBVal = readFile(SPIFFS, "/lastWaterLevelBVal.txt").toInt();
  waterLevelBVal = ultrasonicGroundBVal - ultrasonicBVal;
  if (ultrasonicBVal <= 0){
    waterLevelBVal = lastWaterLevelBVal;
    swaterLevelBVal = String(waterLevelBVal);
  } else if (abs(waterLevelBVal - lastWaterLevelBVal) >= limDiff) {
    waterLevelBVal = lastWaterLevelBVal;
    swaterLevelBVal = String(waterLevelBVal);
  } else {
    swaterLevelBVal = String(waterLevelBVal);
    writeFile(SPIFFS, "/lastWaterLevelBVal.txt", swaterLevelBVal.c_str());
  }
}

int readUltrasonicB(){
  digitalWrite(ultrasonicT2Pin, LOW);
  delayMicroseconds(2);
  digitalWrite(ultrasonicT2Pin, HIGH);
  delayMicroseconds(20);
  digitalWrite(ultrasonicT2Pin, LOW);
  ultrasonicBVal = pulseIn(ultrasonicE2Pin, HIGH, 26000);
  ultrasonicBVal = ultrasonicBVal / 58;
  return ultrasonicBVal;
}
