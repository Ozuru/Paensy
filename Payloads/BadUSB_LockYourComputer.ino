/***
 *        __               __      __  __                    ______                            __           
 *       / /   ____  _____/ /__    \ \/ /___  __  _______   / ____/___  ____ ___  ____  __  __/ /____  _____
 *      / /   / __ \/ ___/ //_/     \  / __ \/ / / / ___/  / /   / __ \/ __ `__ \/ __ \/ / / / __/ _ \/ ___/
 *     / /___/ /_/ / /__/ ,<        / / /_/ / /_/ / /     / /___/ /_/ / / / / / / /_/ / /_/ / /_/  __/ /    
 *    /_____/\____/\___/_/|_|      /_/\____/\__,_/_/      \____/\____/_/ /_/ /_/ .___/\__,_/\__/\___/_/     
 *       ______                           __           __   __             ___/_/                           
 *      / ____/___  ____ _   _____  _____/ /____  ____/ /  / /_  __  __   / __ \____  __  _________  __     
 *     / /   / __ \/ __ \ | / / _ \/ ___/ __/ _ \/ __  /  / __ \/ / / /  / / / /_  / / / / / ___/ / / /     
 *    / /___/ /_/ / / / / |/ /  __/ /  / /_/  __/ /_/ /  / /_/ / /_/ /  / /_/ / / /_/ /_/ / /  / /_/ /      
 *    \____/\____/_/ /_/|___/\___/_/   \__/\___/\__,_/  /_.___/\__, /   \____/ /___/\__,_/_/   \__,_/       
 *                                                            /____/                                        
 *   Original Concept By: SurfKahuna
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
  
  delay(ds);
  
  typeln("notepad.exe");
  
  typeFast("          , ,\ ,'\,'\ ,'\ ,\ ,");
  
  typeFast("    ,  ,\/ \' `'     `   '  /|");
  
  typeFast("    |\/                      |");
  
  typeFast("    :                        |");
  
  typeFast("    :                        |");
  
  typeFast("     |                       |");
  
  typeFast("     |                       |");
  
  typeFast("     :               -.     _|");
  
  typeFast("     :                \     `.");
  
  typeFast("     |         ________:______\\");
  
  typeFast("     :       ,'o       / o    ,");
  
  typeFast("     :       \       ,'-----./");
  
  typeFast("      \_      `--.--'        )");
  
  typeFast("     ,` `.              ,---'|");
  
  typeFast("     : `                     |");
  
  typeFast("      `,-'                   |");
  
  typeFast("      /      ,---.          ,'");
  
  typeFast("   ,-'            `-,------'");
  
  typeFast("   `.        ,--'");
  
  typeFast("     `-.____/");
  
  typeFast("            \\");
  
  typeFast("");
  
  typeFast("");
  
  typeFast("I will learn to lock my computer.");
  
  typeFast("I will learn to lock my computer.");
  
  typeFast("I will learn to lock my computer.");
  
  typeFast("I will learn to lock my computer.");
  
  typeFast("I will learn to lock my computer.");
  
  typeFast("I will learn to lock my computer.");
  
  typeFast("I will learn to lock my computer.");
  
  typeFast("I will learn to lock my computer.");
  
  typeFast("I will learn to lock my computer.");
  
  typeFast("I will learn to lock my computer.");
  
  typeFast("");
  
  typeFast("");
  
  typeFast("");
  
  typeFast("There, just like Bart Simpson: please remember to lock your computer.");
  
  alt(KEY_SPACE);
  
  k(KEY_X);
   
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
