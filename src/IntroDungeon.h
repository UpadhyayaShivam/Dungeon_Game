/*
 * IntroDungeon.h
 *
 *  Created on: Jan 27, 2024
 *      Author: Radhey
 */
#pragma once
#ifndef INTRODUNGEON_H_
#define INTRODUNGEON_H_
#include <iostream>
#include "UserDetails.h"

class IntroDungeon {
	public:
		IntroDungeon();
		virtual ~IntroDungeon();
		void stuckingInDungeon(int favNum, int userAge);
		void enteringInfiniteDungeon();

};

#endif /* INTRODUNGEON_H_ */
