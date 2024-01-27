/*
 * VillanCyclone.cpp
 *
 *  Created on: Jan 27, 2024
 *      Author: Radhey
 */

#include "VillanCyclone.h"
#include <string>

VillanCyclone::VillanCyclone() {
	// TODO Auto-generated constructor stub

	HP=25;
	HP_MAX=25;
	STR=6;
	DFS=1;
	AGI=2;
}

VillanCyclone::~VillanCyclone() {
	// TODO Auto-generated destructor stub
}

std::string VillanCyclone:: getName(){
	return "Cyclone";
}
