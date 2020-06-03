/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  secret society
 */
using namespace std;
std::string societyName(std::vector<std::string> friends) {
	string secret="";
	for(int i=0;i<friends.size();i++)
	{
		secret=secret+friends[i][0];
	}
	sort(secret.begin(),secret.end());
	return secret;
	
}
