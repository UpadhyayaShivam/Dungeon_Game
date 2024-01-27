/*
 * Hero.cpp
 *
 *  Created on: Jan 27, 2024
 *      Author: Radhey
 */

#include "Hero.h"

Hero::Hero() {
	// TODO Auto-generated constructor stub

}

Hero::~Hero() {
	// TODO Auto-generated destructor stub
}


void Hero:: setName(std::string s){
	name = s;
}
std::string  Hero:: getName(){
	return name;
}
void Hero:: heal(int healAmount){
	HP+= healAmount;
	if(HP>HP_MAX){
		HP=HP_MAX;
	}
}
void  Hero:: atkBoost(int attackAmount){
	STR+=attackAmount;
}
void Hero:: defBoost(int defenseAmount){
	DFS+= defenseAmount;
}
