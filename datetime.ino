String getDateTimenow() {
  String year, month, day;
  String hour, minute, second;
  time_t unix;
  if (rtcStatus) {
    DateTime now = rtc.now();
    year = now.year();
    month = now.month();
    if (month.toInt() < 10)
      month = "0" + month;
    day = now.day();
    if (day.toInt() < 10)
      day = "0" + day;
    hour = now.hour();
    if (hour.toInt() < 10)
      hour = "0" + hour;
    minute = now.minute();
    if (minute.toInt() < 10)
      minute = "0" + minute;
    second = now.second();
    if (second.toInt() < 10)
      second = "0" + second;
    unix = now.unixtime();
  } else {
    year = "9999";
    month = "99";
    day = "99";
    hour = "99";
    minute = "99";
    second = "99";
    unix = 0;
  }
  
  sdatenowVal = day + "/" + month + "/" + year;
  stimenowVal = hour + ":" + minute + ":" + second;
  unixtimenow = (unsigned long) unix - 25200;
  sunixnowVal = String(unixtimenow);
}

void rtc_adjust(){
  String validation = responseSipasi.substring(9, 10);
  if (validation == "1"){
    Serial.println(F("RTC: Update RTC Date & Time"));
    int sy, sm, sd, sh, smi, ss;
    sy = responseSipasi.substring(121, 125).toInt();
    sm = responseSipasi.substring(126, 128).toInt();
    sd = responseSipasi.substring(129, 131).toInt();
    sh = responseSipasi.substring(132, 134).toInt();
    smi = responseSipasi.substring(135, 137).toInt();
    ss = responseSipasi.substring(138, 140).toInt();
    rtc.adjust(DateTime(sy, sm, sd, sh, smi, ss));
  }
}
