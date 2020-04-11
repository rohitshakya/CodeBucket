// string::find
#include <iostream>       // std::cout
#include <string>     
using namespace std;    // std::string

int main ()
{
	int n;
	cin>>n;
	std::string str2 ("ic");
	std::string str[n];
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
	}
		for(int i=0;i<n;i++)
	{
		std::size_t found = str[i].find(str2);
 	 if (found!=std::string::npos)
    std::cout << "first 'needle' found at: " << found << '\n';
		
	}
  
  
  return 0;
}
