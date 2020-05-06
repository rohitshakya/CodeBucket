#include <bits/stdc++.h>
using namespace std;

vector<string> split_string(string);

// Complete the reverseArray function below.
vector<int> reverseArray(vector<int> a) {
    vector<int> v;
    for(int i=a.size()-1;i>=0;i--)
    {
        v.push_back(a[i]);
    }
return v;

}

