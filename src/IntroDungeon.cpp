/*
 * IntroDungeon.cpp
 *
 *  Created on: Jan 27, 2024
 *      Author: Radhey
 */

#include "IntroDungeon.h"
#include "UserDetails.h"

IntroDungeon::IntroDungeon() {
	// TODO Auto-generated constructor stub

}

IntroDungeon::~IntroDungeon() {
	// TODO Auto-generated destructor stub
}

void IntroDungeon:: stuckingInDungeon(int favNum, int userAge){
	std::cout<<"weeheheh!! well ur stuck in this dungeon for "<< favNum<<"years" <<std::endl
	<<"its time to escape dungeon before you turn "<< (favNum+userAge) <<"years old."<<std::endl
	<< " u might be not live that much!!"<<std::endl;
}
void IntroDungeon:: enteringInfiniteDungeon(){
	std::cout<<" Yohoooo!! ur entering in infinite dimension.........."<<std::endl;
	for(int i=9;i>0;i--){
		std::cout<< i <<"........"<<std::endl;
	}
	std::cout<<"Welcome to inifinite dimension,, i am inagno the operator "<<std::endl
	<<" as a punishment i gonna ask u few puzzles...."<<std::endl
	<<"going to be fun.... hahahahhah!!"<<std::endl;
}
