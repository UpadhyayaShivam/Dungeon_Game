/*
 * Characters.h
 *
 *  Created on: Jan 27, 2024
 *      Author: Radhey
 */
#pragma once
#ifndef CHARACTERS_H_
#define CHARACTERS_H_
#include <string>

class Characters {
	public:
		Characters();
		virtual ~Characters();
	protected:
		int HP , HP_MAX ,STR , DFS , AGI;
		std::string characterName;

	public:
		void showCharacterList();
		void setYourDreamCharacter(int choice);
		void ShowYourCharacter();
		int getStrength();
		int getHp();
		int getAgility();
		int getDamage();
		int takeDamage(int dmg);
		std:: string getName();

};

#endif /* CHARACTERS_H_ */
