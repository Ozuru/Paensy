/***
 *     _                _     __   __                 _____                             _            
 *    | |              | |    \ \ / /                /  __ \                           | |           
 *    | |     ___   ___| | __  \ V /___  _   _ _ __  | /  \/ ___  _ __ ___  _ __  _   _| |_ ___ _ __ 
 *    | |    / _ \ / __| |/ /   \ // _ \| | | | '__| | |    / _ \| '_ ` _ \| '_ \| | | | __/ _ \ '__|
 *    | |___| (_) | (__|   <    | | (_) | |_| | |    | \__/\ (_) | | | | | | |_) | |_| | ||  __/ |   
 *    \_____/\___/ \___|_|\_\   \_/\___/ \__,_|_|     \____/\___/|_| |_| |_| .__/ \__,_|\__\___|_|   
 *                                                                         | |                       
 *                                                                         |_|                       
 *     _____                           _           _   _             _____                           
 *    /  __ \                         | |         | | | |           |  _  |                          
 *    | /  \/ ___  _ ____   _____ _ __| |_ ___  __| | | |__  _   _  | | | |_____   _ _ __ _   _      
 *    | |    / _ \| '_ \ \ / / _ \ '__| __/ _ \/ _` | | '_ \| | | | | | | |_  / | | | '__| | | |     
 *    | \__/\ (_) | | | \ V /  __/ |  | ||  __/ (_| | | |_) | |_| | \ \_/ // /| |_| | |  | |_| |     
 *     \____/\___/|_| |_|\_/ \___|_|   \__\___|\__,_| |_.__/ \__, |  \___//___|\__,_|_|   \__,_|     
 *                                                            __/ |                                  
 *                                                           |___/                                   
 *
 * Original Concept By: SurfKahuna
 */

#include <paensy.h>

void setup() {
  
  // Configure the delay that everything else scales off of.
  SetDelay(100);
  // Configure the delay that the Morse code uses.
  SetMorseDelay(250);
  
  // Perform an initial delay to give the USB time to prepare.
  PerformInitDelay();
  
  // LED pin number, 13 for 3.1
  // 11 for 2 and 2.x
  SetLEDPin(13);
  
  // Put the pin into output mode
  pinMode(LED_PIN, OUTPUT);
  
  // Turn on the LED pin so we know the device is running.
  digitalWrite(LED_PIN, HIGH);
  
  delay(1000);
  
  // Open up notepad (or any other vector of choice).
  RunCommand("notepad.exe");
  
  delay(1000);
  
  // Start typing the ASCII art.
  TypeLn("          , ,\ ,'\,'\ ,'\ ,\ ,");
  
  TypeLn("    ,  ,\/ \' `'     `   '  /|");
  
  TypeLn("    |\/                      |");
  
  TypeLn("    :                        |");
  
  TypeLn("    :                        |");
  
  TypeLn("     |                       |");
  
  TypeLn("     |                       |");
  
  TypeLn("     :               -.     _|");
  
  TypeLn("     :                \     `.");
  
  TypeLn("     |         ________:______\\");
  
  TypeLn("     :       ,'o       / o    ,");
  
  TypeLn("     :       \       ,'-----./");
  
  TypeLn("      \_      `--.--'        )");
  
  TypeLn("     ,` `.              ,---'|");
  
  TypeLn("     : `                     |");
  
  TypeLn("      `,-'                   |");
  
  TypeLn("      /      ,---.          ,'");
  
  TypeLn("   ,-'            `-,------'");
  
  TypeLn("   `.        ,--'");
  
  TypeLn("     `-.____/");
  
  TypeLn("            \\");
  
  // Go two lines down.
  PressKey(KEY_ENTER, 2);
  
  TypeLn("I will learn to lock my computer.");
  
  TypeLn("I will learn to lock my computer.");
  
  TypeLn("I will learn to lock my computer.");
  
  TypeLn("I will learn to lock my computer.");
  
  TypeLn("I will learn to lock my computer.");
  
  TypeLn("I will learn to lock my computer.");
  
  TypeLn("I will learn to lock my computer.");
  
  TypeLn("I will learn to lock my computer.");
  
  TypeLn("I will learn to lock my computer.");
  
  TypeLn("I will learn to lock my computer.");
  
  // Go three lines down.
  PressKey(KEY_ENTER, 3);
  
  TypeLn("There, just like Bart Simpson: please remember to lock your computer.");
  
  // Open up the window menu.
  Alt(KEY_SPACE);
  
  // Maximize the window.
  PressKey(KEY_X, 1);
   
}

void loop() {
 // Celebratory LED fluttering.
 LED_Flutter(200, 10);
 
 // P
 LED_MorseDot();
 LED_MorseDash();
 LED_MorseDash();
 LED_MorseDot();
 
 // W
 LED_MorseDot();
 LED_MorseDash();
 LED_MorseDash();
 
 // N
 LED_MorseDash();
 LED_MorseDot();

 // 3
 LED_MorseDot();
 LED_MorseDot();
 LED_MorseDot();
 LED_MorseDash();
 LED_MorseDash();
 
 // D
 LED_MorseDash();
 LED_MorseDot();
 LED_MorseDot();
 
 // Flutter again.
 LED_Flutter(200, 10); 
}
