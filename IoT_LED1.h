//----------------------這裡是主頁面--------------------
static const char mainPage[] PROGMEM = u8R"(
  <!DOCTYPE html>
  <html>
  <head>
      <title>ESP8266</title>
      <meta name='viewport' content='width=device-width, initial-scale=1.0'>
      <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
  </head>
  <body>
    <p>遠端控制 LED燈</p>
    <a href='call?led=ON'>開啟LED</a>
    <br><br>
    <a href='call?led=OFF'>關閉LED</a>     
  </body>
  </html>
)";

//----------------------這裡是錯誤路徑頁面--------------------
static const char errorPage[] PROGMEM= u8R"(

)";
  
static const char settingPage[] PROGMEM= u8R"(

)";

//---------勿刪 (讓網頁資料儲存在程式區以節省記憶體)------------
#define WEBPAGE_IN_PROGMEM

