/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title : atm pin validation 
 */
 //4567 or 567875
#include<bits/stdc++.h>
using namespace std;
bool validatePIN(std::string pin) {
	if(pin.length()==4||pin.length()==6)
	{
		for(int i=0;i<pin.length();i++)
		if((char)pin[i]<48||(char)pin[i]>57) return false;
		return true;
	}
	else
	return false;
}
int main()
{
	cout<<validatePIN("4567")<<endl;
	cout<<validatePIN("45675")<<endl;
	cout<<validatePIN("456723")<<endl;
	cout<<validatePIN("ac4567")<<endl;
	cout<<validatePIN("abcd")<<endl;
}
