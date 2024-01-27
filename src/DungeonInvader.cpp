//============================================================================
// Name        : DungeonInvader.cpp
// Author      : Shivam
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Puzzles.h"
#include "UserDetails.h"
#include "Characters.h"
#include "IntroDungeon.h"
#include "Hero.h"
#include "VillanCyclone.h"
#include "VillanBurnOut.h"
#include <iostream>

int main() {
//	cout << "hello" << endl;
	UserDetails user;
	user.setUserDetails();

	IntroDungeon d1;
	d1.stuckingInDungeon(user.getFavNum(),user.getUserAge());

	Characters hero;
	hero.showCharacterList();

	int choice; bool characterSetUp =false;
	system("pause");
	while(!characterSetUp){
		std::cout<<"Enter your choice number....."<<std::endl;
		std::cin>>choice;
		if(choice>0 && choice<=4){
				hero.setYourDreamCharacter(choice);
				characterSetUp = true;
		}else{
			std::cout<<"Invalid choice!!! please choose again and wisely...."<<std::endl;
		}
	}
	hero.ShowYourCharacter();
	system("pause");
	d1.enteringInfiniteDungeon();
	Puzzles p1;
	int dmg = p1.puzzleTask1() + p1.puzzleTask2(hero.getStrength())+p1.puzzleTask3(user.getName());
	int UpdatedHP = hero.getHp();
	UpdatedHP -= dmg;
	std::cout<<"u got "<< dmg << " damage points,, now your hp is "<< UpdatedHP  <<std::endl;

	Hero h1;
	h1.setName(hero.getName());
	h1.ShowYourCharacter();

	VillanCyclone V1;
	V1.ShowYourCharacter();

	h1.takeDamage(V1.getDamage());
	V1.takeDamage(h1.getDamage());

	h1.ShowYourCharacter();
	V1.ShowYourCharacter();

	return 0;
}
