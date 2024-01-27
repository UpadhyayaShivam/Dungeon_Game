/*
 * UserDetails.h
 *
 *  Created on: Jan 26, 2024
 *      Author: Radhey
 */

#ifndef USERDETAILS_H_
#define USERDETAILS_H_
#include <string>
#include <iostream>

class UserDetails {
	public:
		UserDetails();
		virtual ~UserDetails();
	private:
		int UserAge;
		int UserFavouriteNumber;
		std:: string UserName;

	public:
		void setUserDetails();
		void getUserDetails();
		std::string getName();
		int getFavNum();
		int getUserAge();

};

#endif /* USERDETAILS_H_ */
