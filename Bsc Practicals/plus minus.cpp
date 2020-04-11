#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cmath>
#include<iomanip>
using namespace std;


int main(){
    int n;float sump=0,sumn=0,sumz=0;
    float p,s,z;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if(arr[arr_i]>0)
       {
       	sump++;
       }
       if(arr[arr_i]<0)
       {
       	sumn++;
       }
       if(arr[arr_i]==0)
       {
       	sumz++;
       }
    }
    
    
   
    p=sump/n;
    s=sumn/n;
    z=sumz/n;
   
    cout<<setiosflags(ios::fixed)<<p<<endl;
    cout<<setiosflags(ios::fixed)<<s<<endl;
    cout<<setiosflags(ios::fixed)<<z<<endl;
    
    
    
    return 0;
}

