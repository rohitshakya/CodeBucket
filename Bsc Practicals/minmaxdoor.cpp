#include <bits/stdc++.h>

using namespace std;

int revisedRussianRoulette(int a[],int n) {
	int mc=0;
	int maxc=0;
	int i;
	for(i=0;i<n;i++)
	
	{
		
		if(a[i]==1)
		{
			maxc++;
				
		}
	
		
	}
	
	for(i=0;i<n;i++)
	
	{
		
		if(a[i]==1)
		{
			maxc;
		}
	
		
	}
	for(i=0;i<n;i++)
	
	{
		
		if(a[i]==1)
		{
			mc++;
			i++;	
		}
	
		
	}
	cout<<mc<<" "<<maxc;
	return 0;
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    int  doors[n];
    for(int doors_i = 0; doors_i < n; doors_i++){
       cin >> doors[doors_i];
    }
    int result = revisedRussianRoulette(doors,n);
    //for (ssize_t i = 0; i < result.size(); i++) {
      //  cout << result[i] << (i != result.size() - 1 ? " " : "");
    


    return 0;
}

