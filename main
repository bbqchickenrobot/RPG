#include "stdafx.h"
#include <string>
#include <iostream>
#include <windows.h> 
using namespace std;

void typewrite(char text[]){
	for (unsigned int x = 0; x < strlen(text); x++) { 
		cout << text[x]; 
        Sleep(100); 
    }
}

void pause(){
	cout << "\nPress any key to continue..." << endl;
	cin.get();
}

class Weapon {
	public:
		int damage;
		string weapon;
		int ammo;
		int oneShot;
};

class Character {
	public:
		int hp;
		string race;
		string name;
		string planet;
		Weapon weapon;

		void speak(string x){
			cout << x << endl;
		}
};

int main(){

	//weapons
	Weapon laserRifle;
	laserRifle.damage = 5;
	laserRifle.weapon = "Laser Rifle";
	laserRifle.ammo = 25;
	laserRifle.oneShot = 1;

	//falco specifications
	Character falco;
	falco.hp = 100;
	falco.race = "Human";
	falco.name = "Falco";
	falco.weapon = laserRifle;

	//player specifications
	Character player;
	player.hp = 100;
	player.race;
	player.name;
	player.weapon;
	player.planet;

	char openingDialog[] = { 
		"You wake up and find yourself stranded on a mysterious spaceship in outer space.\nNo memory of how you got there. You only know what your name is.\nYou are approached by an unknown human...\n\n" 
    };

	typewrite(openingDialog);
	pause();

	falco.speak("Human: Hello.");
	pause();
	player.speak("You: Where am I? Who are you?");
	pause();
	falco.speak("Human: My name is Falco. We found you unconscious on the moon during our mission.\nYou're a little banged up but should heal in no time. What is your name?");
	cin >> player.name;
	player.speak("You: My name is " + player.name);
	falco.speak("Falco: What planet are you from?");
	cin >> player.planet;
	falco.speak("Falco: What is your race?");
	cin >> player.race;
	falco.speak("Falco: You are a " + player.race + " from " + player.planet + "...Interesting");




	system("pause");
	return 0;
}
