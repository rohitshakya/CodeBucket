#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int profit(int b, int s, int c) {
    int x=c-b;
	int profit=a-x;
	return x;
	// Return the fixed profit.
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int b;
        int s;
        int c;
        cin >> b >> s >> c;
        int result = profit(b, s, c);
        cout << result << endl;
    }
    return 0;
}

