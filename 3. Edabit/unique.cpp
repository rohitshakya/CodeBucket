#include<map>
using namespace std;
double unique(std::vector<double> arr) {
	std::map<double,int> m;
	for(int i=0;i<arr.size();i++)
		m[arr[i]]++;
	for(auto i=m.begin();i!=m.end();i++)
	{
		if(i->second==1) return i->first;
	}
	return 0;
}
