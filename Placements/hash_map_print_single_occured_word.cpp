/*
 * Author : Rohit Shakya
 * Date   : April-2020
 *
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */
 
/*write an efficient program to print words in order which are occuring once in huge a document
challenge is to maintain order, because hashmap doesn't maintain oder;
You can use map instead of unordered_map, but it maintains order in ascending order, also doesn't solve our problem.
Used reverse iterator */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	fstream f;
	string word,filename;
	filename="rohit.txt";
	f.open(filename.c_str());
	unordered_map<string, int> wordFreq;
	
	while(f>>word)
	{
		wordFreq[word]++; 
    	cout<<word<<" ";
	}
	cout<<endl;
  unordered_map<string, int>:: iterator p; 
   // map<string,int>:: iterator p;                              //traverse map alphabetically
   // map<string,int>:: reverse_iterator p;                      //traverse map alphabetically in reverse ordered( use rbegin() and rend())
    for (p = wordFreq.begin(); p != wordFreq.end(); p++) 
    {
    	if(p->second==1)
    	cout << p->first<<" ";	 	
	}
        
}

    
