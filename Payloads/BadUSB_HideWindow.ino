/***
 *        __  __ _      __         _       __ _             __               
 *       / / / /(_)____/ /___     | |     / /(_)____   ____/ /____  _      __
 *      / /_/ // // __  // _ \    | | /| / // // __ \ / __  // __ \| | /| / /
 *     / __  // // /_/ //  __/    | |/ |/ // // / / // /_/ // /_/ /| |/ |/ / 
 *    /_/ /_//_/ \__,_/ \___/     |__/|__//_//_/ /_/ \__,_/ \____/ |__/|__/  
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
int ds = 100;
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
  
  typeln("cmd /Q /D /T:7F /F:OFF /V:ON /K");
  
  hideWindow();
  
  typeln("ping www.google.com");
  
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

void hideWindow() {
  alt(KEY_SPACE);
  k(KEY_M);
  for(int i = 1; i < 150; i++) {
   k(KEY_DOWN);
  }
  Mouse.click();
  delay(ds);
}

void typeln(String chars)
{
  // gotta make our own println function
  Keyboard.print(chars);
  delay(ds);
  Keyboard.println("");
  delay(ds * 4);
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