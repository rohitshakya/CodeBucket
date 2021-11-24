	/*
	 * Author : Rohit Shakya
	 * Date   : July-2020
	 * Compiler : g++ 4.9.2
	 * Flags    : -std=c++14
	 * Time complexity : 
	 * Title : 
	 */
	#include<bits/stdc++.h>

	using namespace std;
	string formatProducts(int A, int B);
	int main() {
	  int a = 1, b = 10;
	  cout << formatProducts(a, b);
	}
	string formatProducts(int A, int B) {
	  long long c = 1;
	  string result = "";
	  int e = 0;
	  for (int i = A; i <= B; i++) {
	    c = c * i;
	  }
	  while (c % 10 == 0) {
	    ++e;
	    c = c / 10;
	  }
	  result += to_string(c);

	  if (result.length() > 10) {
	    result = result.substr(0, 5) + "..." + result.substr(result.length() - 5, result.length() - 1) + " * 10^" + to_string(e);
	  } else {
	    result = to_string(c) + " * 10^" + to_string(e);
	  }
	  return result;

	}
