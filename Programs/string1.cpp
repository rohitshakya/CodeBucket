#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    
    string s1,s2,s3,s4;
    cin>>s1>>s2;
    
    cout<<s1.size()<<" "<<s2.size()<<"\n";
    cout<<s1+s2<<"\n";
    s3=s1[0];
    s4=s2[0];
    s3=s3.append(s2,1,s2.size());
    s4=s4.append(s1,1,s1.size());
    cout<<s4<<" "<<s3;

    return 0;
}
