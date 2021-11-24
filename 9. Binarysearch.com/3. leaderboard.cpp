#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& nums) {
    map<int,int> mymap;
    for(int i=0;i<nums.size();i++)
    {
        mymap[nums[i]]++;
    }
    int a=0;
     for (auto p = mymap.rbegin(); p != mymap.rend(); p++) {
        cout << p->first <<" : "<< p->second << endl;
	 mymap[p->first]=a++;
    }
    vector<int> v;
     for(int i=0;i<nums.size();i++)
    {
        v.push_back(mymap[nums[i]]);
    }
	
      return v;
    
}
int main()
{
	vector<int> v={50,30,50,90,10};
	solve(v);
}
