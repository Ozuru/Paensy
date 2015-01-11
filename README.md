# Paensy 0.1 by Ozuru (http://www.malware.cat/)

## What is Paensy?

Paensy is a combination of the word payload and Teensy - Paensy is an attacker-oriented library written for the development of Teensy devices. Paensy simplifies mundane tasks and allows an easier platform for scripting.

For more information, check out my blog post on it [here.](http://malware.cat/?p=89)

## Getting Started With Paensy

You will need the [Teensy USB Development Board](https://www.pjrc.com/teensy/) and [Teensyduino](https://www.pjrc.com/teensy/teensyduino.html). The PJRC website has a [very easy to use guide](https://www.pjrc.com/teensy/first_use.html) on getting Teensyduino setup.

Once Teensyduino is installed and working, place the PaensyLib folder inside your Arduino\libraries\. Arduino is installed in your Program Files (x86 if 64 bit) directory by default. To utilize Paensy, simply include the library in your code:

    #include <paensy.h>

## Payloads

Inside the payloads folder you will find a few simple payloads that I have created using Paensy. Feel free to modify/edit them however you wish. They're fully commented so understanding them shouldn't be an issue. If you are confused, open a ticket!

I go more in-depth in my [blog article](http://malware.cat/?p=89) on what each individual payload does.

If you make a payload that you'd like to share, please, open a ticket and I'll gladly add it to the payloads section!

