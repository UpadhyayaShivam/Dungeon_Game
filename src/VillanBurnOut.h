/*
 * VillanBurnOut.h
 *
 *  Created on: Jan 27, 2024
 *      Author: Radhey
 */

#ifndef VILLANBURNOUT_H_
#define VILLANBURNOUT_H_
#include<string>
#include "Characters.h"

class VillanBurnOut :public Characters
{
public:
	VillanBurnOut();
	virtual ~VillanBurnOut();
	std::string getName();
};

#endif /* VILLANBURNOUT_H_ */
