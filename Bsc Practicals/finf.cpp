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
  
  
/*
  // different member versions of find in the same order as above:
  std::size_t found = str.find(str2);
  if (found!=std::string::npos)
    std::cout << "first 'needle' found at: " << found << '\n';

  found=str.find("needles are small",found+1,6);
  if (found!=std::string::npos)
    std::cout << "second 'needle' found at: " << found << '\n';

  found=str.find("haystack");
  if (found!=std::string::npos)
    std::cout << "'haystack' also found at: " << found << '\n';

  found=str.find('.');
  if (found!=std::string::npos)
    std::cout << "Period found at: " << found << '\n';

  // let's replace the first needle:
  str.replace(str.find(str2),str2.length(),"preposition");
  std::cout << str << '\n';
*/
  return 0;
}
