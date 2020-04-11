#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int  solve(int a[],int n){
    // Complete this function
    for(int i=0;i<n;i++)
    {
    	
    		if(a[i]%5>=3&&a[i]>=38)
    		{
    			a[i]=(a[i]-(a[i]%5))+5;
    			
    		}
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    int  grades[n];
	for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    solve(grades,n);
    for (ssize_t i = 0; i <n; i++) {
        cout << grades[i] <<endl;
    }
    cout << endl;
    

    return 0;
}
