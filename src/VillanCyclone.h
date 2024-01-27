/*
 * VillanCyclone.h
 *
 *  Created on: Jan 27, 2024
 *      Author: Radhey
 */

#ifndef VILLANCYCLONE_H_
#define VILLANCYCLONE_H_

#include <string>
#include <iostream>
#include "Characters.h"

class VillanCyclone :public Characters
{
public:
	VillanCyclone();
	virtual ~VillanCyclone();

	std::string getName();
};

#endif /* VILLANCYCLONE_H_ */
