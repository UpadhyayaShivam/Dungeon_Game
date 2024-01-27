/*
 * VillanBurnOut.cpp
 *
 *  Created on: Jan 27, 2024
 *      Author: Radhey
 */

#include "VillanBurnOut.h"

VillanBurnOut::VillanBurnOut() {
	// TODO Auto-generated constructor stub
	HP=10;
	HP_MAX=10;
	STR = 4;
	DFS=2;
	AGI=5;

}

VillanBurnOut::~VillanBurnOut() {
	// TODO Auto-generated destructor stub
}
std::string VillanBurnOut:: getName(){
	return "BurnOut";
}
