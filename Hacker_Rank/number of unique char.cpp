#include<set>
using namespace std;
int countUnique(std::string str1, std::string str2) {
	set<char> s;
	string s1=str1+str2;
	for(int i=0;i<s1.length();i++)
	{
		s.insert(s1[i]);
	}
	return s.size();
	
}
