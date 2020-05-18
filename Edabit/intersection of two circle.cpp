/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title : collision detection/edabit 
 */
#include<cmath>
using namespace std;
bool isCircleCollision(std::vector<int> c1,std::vector<int> c2) {
	double distance=sqrt((c1[1]-c2[1])*(c1[1]-c2[1])+(c1[2]-c2[2])*(c1[2]-c2[2]));
	if(distance>c1[0]+c2[0]) return false;
	else return true;
}
