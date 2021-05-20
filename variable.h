const size_t capacity = JSON_OBJECT_SIZE(81) + 2320;
DynamicJsonDocument doc(capacity);
const char* json = "{\"1\":\"bedegolanr1MNqCS4PybI\",\"2\":\"bedegolanr2CeqqZ6rvTA\",\"3\":\"bedegolanr3cB3kpSGtIv\",\"4\":\"bedegolanr4rckwRd2Ayn\",\"5\":\"bedegolanr5T2QYJF7NEs\",\"6\":\"bedegolanr6xzR765AyXi\",\"7\":\"bedegolanr7SXGnxyi2Cb\",\"8\":\"bedegolanr8eRJXnWgzHd\",\"9\":\"bedegolanr9NMmbLsz4RW\",\"10\":\"bedegolanr10DlIR4tbIjm\",\"11\":\"bedegolanr11HCjBZ85s6t\",\"12\":\"bedegolanr12URbgtpRNCr\",\"13\":\"bedegolanr13N82AN4pTN3\",\"14\":\"bedegolanr14q5fcBb6S6Y\",\"15\":\"4bacf52a77b5a7cb4d3be0d41647e26d\",\"16\":\"bedegolans1qOHEDIGsdc\",\"17\":\"bedegolans2EwJhgYOFMb\",\"18\":\"mericanr1aAIujQs7NK\",\"19\":\"mericanr24OlTWDpX5j\",\"20\":\"mericanr39aH3nrRfnL\",\"21\":\"mericanr4Vc63fhpnim\",\"22\":\"mericanr5ZzvmnTplsq\",\"23\":\"mericanr6goOCI9kRoi\",\"24\":\"mericanr7jqlt18PTox\",\"25\":\"mericanr8VxbUfd9Zxx\",\"26\":\"mericanr9o7MmjpFpBF\",\"27\":\"mericanr10f5rappUy4v\",\"28\":\"mericanr11XzLCzI8v2x\",\"29\":\"mericanr12JxOk8WSkUW\",\"30\":\"mericanr13SxNJAKh63B\",\"31\":\"mericanr14UeQH61JYLK\",\"32\":\"mericanr15jzY2HwKxYK\",\"33\":\"mericanr16fxONeEtMwU\",\"34\":\"mericanr17UbfqT6u4Ls\",\"35\":\"mericanr18IgfTrrmE7c\",\"36\":\"mericanr19vc4sdb17QH\",\"37\":\"mericanr20RdtMLVOx7B\",\"38\":\"mericanr21lYVQts5BNX\",\"39\":\"mericanr22WpsqQXvCTN\",\"40\":\"4d23fbd943be8d4c0811e899d10667e7\",\"41\":\"05c8e1d117572569cccdf841131d3a76\",\"42\":\"da314b57bc4c13519588a66e83ba6855\",\"43\":\"mericans1vJCngnOy7d\",\"44\":\"mericans2z5m3twY8YD\",\"45\":\"mericans3wmNJLt7SJr\",\"46\":\"7621f952f48e692850b51fe686debdba\",\"47\":\"wsekampungr1kTF60HgNuK\",\"48\":\"wsekampungr2FNr5RqpxJQ\",\"49\":\"wsekampungr3PwF3dl2k5j\",\"50\":\"wsekampungr4Aq7hIzSkBR\",\"51\":\"wsekampungr5pxPG8QfH43\",\"52\":\"wsekampungr6QC6RDhlpRz\",\"53\":\"wsekampungr7L3cT3CYOCF\",\"54\":\"wsekampungr8zfb3VTkG0X\",\"55\":\"wsekampungr9BHY8ujPPKz\",\"56\":\"wsekampungr10yKazy6HKlg\",\"57\":\"wsekampungr11pl3h6b6JV3\",\"58\":\"wsekampungr12Whb54hOhmR\",\"59\":\"wsekampungr13T0OJa1glAY\",\"60\":\"wsekampungr14j1OBfiJ5CD\",\"61\":\"wsekampungr15iRHVpZq6eM\",\"62\":\"wsekampungr16HpZtwnXNP1\",\"63\":\"wsekampungr17XtW2G1GSn1\",\"64\":\"wsekampungr18wjHL1DuR5N\",\"65\":\"wsekampungr19Z3da426jo6\",\"66\":\"wsekampungr20R494FQBZy0\",\"67\":\"wsekampungr21y2ITh7song\",\"68\":\"wsekampungr22V8NTZTQ4Xz\",\"69\":\"wsekampungr23hkKK9FpE1F\",\"70\":\"wsekampungr24ORcCYuoAV3\",\"71\":\"wsekampungr25CGdpubBfUG\",\"72\":\"wsekampungr26XimJFpdWsu\",\"73\":\"wsekampungr27dI9NV4Bhmh\",\"74\":\"wsekampungr28OvUTD2o17z\",\"75\":\"wsekampungr29ckIL3dXGQU\",\"76\":\"wsekampungr30WKkXsUxSNy\",\"77\":\"wsekampungr31FinCnPuLLM\",\"78\":\"wsekampungr32lVgzup6TH6\",\"79\":\"wsekampungs1tRNn5P4SDg\",\"80\":\"wsekampungs2VgNBLkMDND\",\"81\":\"go123\"}";
DeserializationError error = deserializeJson(doc, json);

const char* root_1 = doc["1"]; // "bedegolanr1MNqCS4PybI"
const char* root_2 = doc["2"]; // "bedegolanr2CeqqZ6rvTA"
const char* root_3 = doc["3"]; // "bedegolanr3cB3kpSGtIv"
const char* root_4 = doc["4"]; // "bedegolanr4rckwRd2Ayn"
const char* root_5 = doc["5"]; // "bedegolanr5T2QYJF7NEs"
const char* root_6 = doc["6"]; // "bedegolanr6xzR765AyXi"
const char* root_7 = doc["7"]; // "bedegolanr7SXGnxyi2Cb"
const char* root_8 = doc["8"]; // "bedegolanr8eRJXnWgzHd"
const char* root_9 = doc["9"]; // "bedegolanr9NMmbLsz4RW"
const char* root_10 = doc["10"]; // "bedegolanr10DlIR4tbIjm"
const char* root_11 = doc["11"]; // "bedegolanr11HCjBZ85s6t"
const char* root_12 = doc["12"]; // "bedegolanr12URbgtpRNCr"
const char* root_13 = doc["13"]; // "bedegolanr13N82AN4pTN3"
const char* root_14 = doc["14"]; // "bedegolanr14q5fcBb6S6Y"
const char* root_15 = doc["15"]; // "4bacf52a77b5a7cb4d3be0d41647e26d"
const char* root_16 = doc["16"]; // "bedegolans1qOHEDIGsdc"
const char* root_17 = doc["17"]; // "bedegolans2EwJhgYOFMb"
const char* root_18 = doc["18"]; // "mericanr1aAIujQs7NK"
const char* root_19 = doc["19"]; // "mericanr24OlTWDpX5j"
const char* root_20 = doc["20"]; // "mericanr39aH3nrRfnL"
const char* root_21 = doc["21"]; // "mericanr4Vc63fhpnim"
const char* root_22 = doc["22"]; // "mericanr5ZzvmnTplsq"
const char* root_23 = doc["23"]; // "mericanr6goOCI9kRoi"
const char* root_24 = doc["24"]; // "mericanr7jqlt18PTox"
const char* root_25 = doc["25"]; // "mericanr8VxbUfd9Zxx"
const char* root_26 = doc["26"]; // "mericanr9o7MmjpFpBF"
const char* root_27 = doc["27"]; // "mericanr10f5rappUy4v"
const char* root_28 = doc["28"]; // "mericanr11XzLCzI8v2x"
const char* root_29 = doc["29"]; // "mericanr12JxOk8WSkUW"
const char* root_30 = doc["30"]; // "mericanr13SxNJAKh63B"
const char* root_31 = doc["31"]; // "mericanr14UeQH61JYLK"
const char* root_32 = doc["32"]; // "mericanr15jzY2HwKxYK"
const char* root_33 = doc["33"]; // "mericanr16fxONeEtMwU"
const char* root_34 = doc["34"]; // "mericanr17UbfqT6u4Ls"
const char* root_35 = doc["35"]; // "mericanr18IgfTrrmE7c"
const char* root_36 = doc["36"]; // "mericanr19vc4sdb17QH"
const char* root_37 = doc["37"]; // "mericanr20RdtMLVOx7B"
const char* root_38 = doc["38"]; // "mericanr21lYVQts5BNX"
const char* root_39 = doc["39"]; // "mericanr22WpsqQXvCTN"
const char* root_40 = doc["40"]; // "4d23fbd943be8d4c0811e899d10667e7"
const char* root_41 = doc["41"]; // "05c8e1d117572569cccdf841131d3a76"
const char* root_42 = doc["42"]; // "da314b57bc4c13519588a66e83ba6855"
const char* root_43 = doc["43"]; // "mericans1vJCngnOy7d"
const char* root_44 = doc["44"]; // "mericans2z5m3twY8YD"
const char* root_45 = doc["45"]; // "mericans3wmNJLt7SJr"
const char* root_46 = doc["46"]; // "7621f952f48e692850b51fe686debdba"
const char* root_47 = doc["47"]; // "wsekampungr1kTF60HgNuK"
const char* root_48 = doc["48"]; // "wsekampungr2FNr5RqpxJQ"
const char* root_49 = doc["49"]; // "wsekampungr3PwF3dl2k5j"
const char* root_50 = doc["50"]; // "wsekampungr4Aq7hIzSkBR"
const char* root_51 = doc["51"]; // "wsekampungr5pxPG8QfH43"
const char* root_52 = doc["52"]; // "wsekampungr6QC6RDhlpRz"
const char* root_53 = doc["53"]; // "wsekampungr7L3cT3CYOCF"
const char* root_54 = doc["54"]; // "wsekampungr8zfb3VTkG0X"
const char* root_55 = doc["55"]; // "wsekampungr9BHY8ujPPKz"
const char* root_56 = doc["56"]; // "wsekampungr10yKazy6HKlg"
const char* root_57 = doc["57"]; // "wsekampungr11pl3h6b6JV3"
const char* root_58 = doc["58"]; // "wsekampungr12Whb54hOhmR"
const char* root_59 = doc["59"]; // "wsekampungr13T0OJa1glAY"
const char* root_60 = doc["60"]; // "wsekampungr14j1OBfiJ5CD"
const char* root_61 = doc["61"]; // "wsekampungr15iRHVpZq6eM"
const char* root_62 = doc["62"]; // "wsekampungr16HpZtwnXNP1"
const char* root_63 = doc["63"]; // "wsekampungr17XtW2G1GSn1"
const char* root_64 = doc["64"]; // "wsekampungr18wjHL1DuR5N"
const char* root_65 = doc["65"]; // "wsekampungr19Z3da426jo6"
const char* root_66 = doc["66"]; // "wsekampungr20R494FQBZy0"
const char* root_67 = doc["67"]; // "wsekampungr21y2ITh7song"
const char* root_68 = doc["68"]; // "wsekampungr22V8NTZTQ4Xz"
const char* root_69 = doc["69"]; // "wsekampungr23hkKK9FpE1F"
const char* root_70 = doc["70"]; // "wsekampungr24ORcCYuoAV3"
const char* root_71 = doc["71"]; // "wsekampungr25CGdpubBfUG"
const char* root_72 = doc["72"]; // "wsekampungr26XimJFpdWsu"
const char* root_73 = doc["73"]; // "wsekampungr27dI9NV4Bhmh"
const char* root_74 = doc["74"]; // "wsekampungr28OvUTD2o17z"
const char* root_75 = doc["75"]; // "wsekampungr29ckIL3dXGQU"
const char* root_76 = doc["76"]; // "wsekampungr30WKkXsUxSNy"
const char* root_77 = doc["77"]; // "wsekampungr31FinCnPuLLM"
const char* root_78 = doc["78"]; // "wsekampungr32lVgzup6TH6"
const char* root_79 = doc["79"]; // "wsekampungs1tRNn5P4SDg"
const char* root_80 = doc["80"]; // "wsekampungs2VgNBLkMDND"
const char* root_81 = doc["81"]; // "go123"

const char APN[] = "internet";
const char *ssid = "plantWifi";
const char *password = "987654321";

char str[220];
String apikeyVal = "go123";

bool rtcStatus = true;
bool bmpStatus = false;
bool spiffsStatus = true;
bool runStatus = false;
bool serialStatus = true;
bool simStatus = false;
bool sendStatus = false;

int sw1Pin = 12;
int sw2Pin = 4;
int sw3Pin = 2;
int rainPin = 34;
int windPin = 35;
int simTXPin = 16;
int simRXPin = 17;
int simRSTPin = 15;
int alarmPin = 27;
int buzzPin = 25;
int wdtPin = 32;
int csPin = 5;
int intPin = 27;
int ultrasonicT1Pin = 26;
int ultrasonicE1Pin = 33;
int ultrasonicT2Pin = 14;
int ultrasonicE2Pin = 13;

unsigned long unixtimenow;
unsigned long unixtimebefore;

String C00 = "&C0=";
String C01 = "&C1=";
String C02 = "&C2=";
String C03 = "&C3=";
String C04 = "&C4=";
String C05 = "&C5=";
String C06 = "&C6=";
String C07 = "&C7=";
String C08 = "&C8=";
String C09 = "&C9=";
String C10 = "&C10=";
String C11 = "&C11=";
String C12 = "&C12=";
String C13 = "&C13=";
String C14 = "&C14=";

int serialVal;
int adcVal;
int apiVal;
int batCalibVal;
int sendTimeVal;
int sendTimeVals;
int ultrasonicGroundAVal;
int ultrasonicGroundBVal;
int sendCountVal;
int rainTotalVal;
int windSpeedTotalVal;
int rainVal;
int windSpeedVal;
int windDirectionVal;
int ultrasonicAVal;
int ultrasonicBVal;
int waterLevelAVal;
int waterLevelBVal;
int limDiff;
int lastWaterLevelBVal;

float fbatCalibVal;
float fbatteryVal;
float firradianceVal;
float fairpressureVal;
float ftemperatureBmpVal;
float ftemperatureRtcVal;
float ftemperatureHdcVal;
float fhumidityHdcVal;

String sunixtimebefore;
String responseSipasi;
String sapiVal;
String sdatenowVal;
String stimenowVal;
String sunixnowVal;
String srainTotalVal;
String swindSpeedTotalVal;
String sbatCalibVal;
String ssendCountVal;
String sbatteryVal;
String sirradianceVal;
String sairpressureVal;
String stemperatureBmpVal;
String stemperatureRtcVal;
String stemperatureHdcVal;
String shumidityHdcVal;
String srainVal;
String swindSpeedVal;
String swindDirectionVal;
String sultrasonicAVal;
String swaterLevelAVal;
String sultrasonicBVal;
String swaterLevelBVal;
String sultrasonicGroundAVal;
String sultrasonicGroundBVal;
