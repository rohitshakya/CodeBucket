/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  convert to decimal percentage
 */

using namespace std;

vector<double> convertToDecimal(vector<string> perc) {
	vector<double> v;
	for(int i=0;i<perc.size();i++)
	{
		std::string s="";
		for(int j=0;i<perc[i].size()-1;j++)
			s=s+perc[i][j];
		double j=stod(s);
		v.push_back(j/100);
	}
	return v;
}
