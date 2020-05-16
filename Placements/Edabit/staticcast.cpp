/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title : static_cast<float>(f)//edabit; 
 */
#include<iostream>
using namespace std;

bool changeEnough(std::vector<int> change, float amountDue) {
	float amount=(static_cast<float>(change[0]))/4+(static_cast<float>(change[1]))/10+(static_cast<float>(change[2]))/20+(static_cast<float>(change[3]))/100;
	if(amount>=amountDue) return true;
	else return false;
	
}
