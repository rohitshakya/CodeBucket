/*
 * Author : Rohit Shakya
 * Date   : 21-April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(nlogn)
 * title :  Permutations on a collection/reverse/sort/rotate/partial-sort/random_shuffle
 */
#include<bits/stdc++.h>
using namespace std;
void sortVector();
int main()
{
	
	sortVector();
	
}
void sortVector()
{
	vector<int> v={2,6,7,4,2,3,4,5,6,11,78,34};
	cout<<"Vector after the partial sort from index 0 to 5"<<endl;
	sort(v.begin(),v.begin()+6); //partial sort from index 0 to (0+6-1)
	for(auto i=v.begin();i!=v.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Vector after the complete sort "<<endl;
	sort(v.begin(),v.end()); // complete sort
	for(auto i=v.begin();i!=v.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Vector after the shuffle "<<endl;
	random_shuffle(v.begin(),v.end()); //random_shuffle(): shuffle all the element in the range, see default_random_engine(seed)
	for(auto i=v.begin();i!=v.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Vector after the rotation by 3 positions"<<endl;
	rotate(v.begin(),v.begin()+3,v.end()); //rotate(first, new first, last);
	for(auto i=v.begin();i!=v.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	cout<<"Vector after the reversal"<<endl;
	reverse(v.begin(),v.end()); // reverse the vector
	for(auto i=v.begin();i!=v.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
}
