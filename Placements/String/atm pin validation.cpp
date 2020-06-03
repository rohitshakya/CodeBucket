/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title : atm pin validation 
 */
 //4567 or 567875
bool validatePIN(std::string pin) {
	if(pin.length()==4||pin.length()==6)
	{
		for(int i=0;i<pin.length();i++)
		if((char)pin[i]<48||(char)pin[i]>57) return false; break;
		return true;
	}
	else
	return false;
	
}
