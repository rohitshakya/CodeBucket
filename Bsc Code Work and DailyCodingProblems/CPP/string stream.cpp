#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> a;
    stringstream s(str);
    int word;
    char ch;
    while(s>>word)
    {	char ch;
    	s>>ch;
    	a.push_back(word);
    	
	}
	return a;
	// Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
