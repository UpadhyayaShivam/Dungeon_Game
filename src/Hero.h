/*
 * Hero.h
 *
 *  Created on: Jan 27, 2024
 *      Author: Radhey
 */

#ifndef HERO_H_
#define HERO_H_

#include <iostream>
#include <string>
#include "Characters.h"

class Hero : public Characters
{
	private:
		std::string name;
	public:
		Hero();
		virtual ~Hero();

		void setName(std::string s);
		std::string getName();
		void heal(int healAmount);
		void atkBoost(int attackAmount);
		void defBoost(int defenseAmount);
};

#endif /* HERO_H_ */
