#include <string>
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <array>
using namespace std;

void typewrite(char text[]){
	for (unsigned int x = 0; x < strlen(text); x++) { 
		cout << text[x]; 
        Sleep(20); 
    }
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

	const int SIZE = 4;

	//array of races
	string races[SIZE] = {"Human", "Alien", "Cyborg", "Elf"};

	//array of planets
	string planets[SIZE] = {"Earth", "Neptune", "Venus", "Autismis"};

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
	system("pause");

	falco.speak("Human: Hello.");
	system("pause");
	player.speak("You: Where am I? Who are you?");
	system("pause");
	falco.speak("Human: My name is Falco.\nWe found you unconscious on the moon during our mission.\nYou're a little banged up but should heal in no time.\nWhat is your name?");
	cin >> player.name;
	player.speak("You: My name is " + player.name);
	system("pause");
	falco.speak("Falco: What is your race?");

	//spits out each race
	for (int x = 0;  x < SIZE; x++){
		int z = 1;
		cout << x+1;
		cout << ". " + races[x] << endl;
		
	}

	int race = 0;

	cout << "Enter A number:" << endl;
	cin >> race;

	if (race == 1 || race == 2 || race == 3 || race==4){
		switch(race){
		case 1:
			player.race = "Human";
			cout << "You are a Human" << endl;
			break;
		case 2:
			player.race = "Alien";
			cout << "You are an Alien" << endl;
			break;
		case 3:
			player.race = "Cyborg";
			cout << "You are a Cyborg" << endl;
			break;
		case 4:
			player.race = "Elf";
			cout << "You are an Elf" << endl;
			break;
		}
	}
	else{
		cout << "Your race is unknown." << endl;
		player.race = "Unknown";
	}

	system("pause");
	falco.speak("Falco: What planet are you from?");

	//spits out each planet
	for (int x = 0;  x < SIZE; x++){
		int z = 1;
		cout << x+1;
		cout << ". " + planets[x] << endl;
		
	}

	int planet = 0;

	cout << "Enter A number:" << endl;
	cin >> planet;

	if (planet == 1 || planet == 2 || planet == 3 || planet == 4){
		switch(planet){
		case 1:
			player.planet = "Earth";
			cout << "You are from Earth" << endl;
			break;
		case 2:
			player.planet = "Neptune";
			cout << "You are from Neptune" << endl;
			break;
		case 3:
			player.planet = "Venus";
			cout << "You are from Venus" << endl;
			break;
		case 4:
			player.planet = "Autismis";
			cout << "You are from Autismis" << endl;
			break;
		}
	}
	else{
		cout << "That planet is unknown." << endl;
		player.planet = "Unknown";
	}

	falco.speak("Falco: You are a " + player.race + " from " + player.planet + "...Interesting");



	system("pause");
	return 0;
}
