/*
 * UserDetails.cpp
 *
 *  Created on: Jan 26, 2024
 *      Author: Radhey
 */

#include "UserDetails.h"

UserDetails::UserDetails() {
	// TODO Auto-generated constructor stub

}

UserDetails::~UserDetails() {
	// TODO Auto-generated destructor stub
}

void UserDetails::  setUserDetails(){
			std:: cout<< "Hello there,, yeah!!"<<std::endl;
			std:: cout<< "What's your name??"<<std::endl;
			std:: cin>> UserName;
			std:: cout<< UserName + " , WELCOME to the dungeon, muhahahahahahha..."<<std::endl;
			std:: cout<< "How Old are u????"<<std::endl;
			std:: cin>> UserAge;
			std:: cout<<"What's ur favourite number???" <<std::endl;
			std:: cin>> UserFavouriteNumber;
		}

void UserDetails:: getUserDetails(){
				std:: cout<< this->UserName<<std::endl;
				std:: cout<< this->UserAge<<std::endl;
				std:: cout<< this->UserFavouriteNumber<<std::endl;
		}

std::string UserDetails:: getName(){
				return this->UserName;
}
int UserDetails:: getFavNum(){
	return this->UserFavouriteNumber;
}
int UserDetails:: getUserAge(){
	return this->UserAge;
}
