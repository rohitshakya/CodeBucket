/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : format a phone number 
 */
//format=format+to_string(numbers[i]);
using namespace std;
std::string formatPhoneNumber(std::vector<int> numbers) {
	string format="(";
	for(int i=0;i<3;i++)
	{
		format=format+(char)(numbers[i]+48);
	}
	format=format+") ";
	for(int i=3;i<6;i++)
	{
		format=format+(char)(numbers[i]+48);
	}
	format=format+'-';
	for(int i=6;i<numbers.size();i++)
	{
		format=format+(char)(numbers[i]+48);
	}
	return format;
}
