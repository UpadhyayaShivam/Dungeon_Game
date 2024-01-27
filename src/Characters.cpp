/*
 * Characters.cpp
 *
 *  Created on: Jan 27, 2024
 *      Author: Radhey
 */

#include "Characters.h"
#include <iostream>

Characters::Characters() {
	// TODO Auto-generated constructor stub

}

Characters::~Characters() {
	// TODO Auto-generated destructor stub
}

void Characters:: showCharacterList(){
	std::cout << "It's time to choose your heroic character to escape... " << std::endl
	<< "Choose wisely!!!" << std::endl<< "What type of character do you want???" << std::endl;
	std::cout<<""<<std::endl;
	std::cout << " 1 - Captain America" << "    2 - Superman" << std::endl
	 << " 3 - SpiderMan"<< "    4 - IronMan" << std::endl;
}

void Characters:: setYourDreamCharacter(int choice){
	if(choice == 1){
					HP = 90;
					STR = 100;
					DFS = 80;
					AGI = 75;
					characterName ="Captain America";
					std:: cout<<"Hey Captain America,, check out your stats..."<<std::endl;
				}
				else if(choice == 2){
					HP = 95;
					STR = 100;
					DFS = 90;
					AGI = 90;
					characterName ="SuperMan";
					std:: cout<<"Hey SuperMan,, check out your stats..."<<std::endl;
				}
				else if(choice == 3){
					HP = 90;
					STR = 95;
					DFS = 70;
					AGI = 95;
					characterName ="Spiderman";
					std:: cout<<"Hey Spiderman,, check out your stats..."<<std::endl;
				}
				else if(choice == 4){
					HP = 85;
					STR = 95;
					DFS = 95;
					AGI = 80;
					characterName ="IronMan";
					std:: cout<<"Hey IronMan,, check out your stats..."<<std::endl;
				}
				else{
					std:: cout<<"Hey ,, selected wrong character!!! this character does not exists,, plz choose wisely...."<<std::endl;
				}
}
void Characters:: ShowYourCharacter(){
	std::cout<<"Remember your stats for future battles...."<<std::endl<<"******* YOUR STATS ******"<<std::endl;
	std::cout<<characterName<<std::endl;
	std::cout<<"HP - " << this->HP<<"/"<<this->HP_MAX<< " Strength - " << this->STR<<std::endl
	<< "Defense - " << this->DFS<< " Agility - " << this->AGI<<std::endl;
}
int Characters:: getStrength(){
	return this->STR;
}
int Characters:: getHp(){
	return this->HP;
}

int Characters:: getAgility(){
	return this->AGI;
}
int Characters:: getDamage(){
	return this->STR;
}
int Characters:: takeDamage(int dmg){
	int damageAfterDef = dmg - this->DFS;
	if(damageAfterDef<1){
		damageAfterDef = 1;
	}
	HP -= damageAfterDef;
}
std:: string Characters:: getName(){
		return "CHARACTER";
}
