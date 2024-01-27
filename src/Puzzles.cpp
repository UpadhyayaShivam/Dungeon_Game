/*
 * Puzzles.cpp
 *
 *  Created on: Jan 26, 2024
 *      Author: Radhey
 */

#include "Puzzles.h"
#include <iostream>
#include <string>

//Puzzles::Puzzles() {
//	// TODO Auto-generated constructor stub
//
//}
//
//Puzzles::~Puzzles() {
//	// TODO Auto-generated destructor stub
//}

// int puzzle3(string name){
//    cout<<" what's your name???"<<endl;
//    string name1;
//    cin>>name1;
//    int n = name1.size();
//    if(name1 == name){
//         return 0;
//    }else{
//         cout<< n <<" points penalty"<<endl;
//     return n;
//    }
// }


int Puzzles:: puzzleTask1(){
    std::cout<<"what's 7+11???"<<std::endl;
    int pzz;
    std::cin>>pzz;
    if(pzz == (18)){
        return 0;
    }else{
        std::cout<<"11 points penalty"<<std::endl;
        return 11;
    }
}

int Puzzles:: puzzleTask2(int str){
	std::cout<<"what's your strength??"<<std::endl;
    int str1;
    int cnt=0;
    while(str != 0) {
          str = str / 10;
          cnt++;
       }
    std::cin>>str1;
    if(str1 == str){
        return 0;
    }else{
    	std::cout<< (cnt) <<"points penalty"<<std::endl;
        return (cnt);

    }
}


int Puzzles:: puzzleTask3(std::string name) {

	std::cout << "What's your name???" << std::endl;
	std::string name1;
	std::cin >> name1;
   int n = name1.size();
   if (name1 == name) {
        return 0;
   } else {
	   std::cout << n << " points penalty" << std::endl;
        return n;
   }
}
