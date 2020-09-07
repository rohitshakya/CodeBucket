/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title : string partition into n parts 
 */

vector<string> partition(string str, int n) {
	vector<string> v;
	int count=0;
	string s="";
	for(int i=0;i<str.length();i++)
	{
		s=s+str[i];
		count++;
		if(count==n)
		{
			v.push_back(s);
			s="";
			count=0;
		}
		
	}
	if(s.length()>0) v.push_back(s);
	return v;
}
