/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  return a sentence where each word has a first letter capital
 */
 //rohit IS a Good boy to Rohit IS A Good Boy.

std::string makeTitle(std::string str) {
	int flag=0;
	for(int i=0;i<str.length();i++)
	{
			if((char)str[i]>96&&(char)str[i]<123&&flag==0) 
			{
				str[i]=(char)str[i]-32;
			}
		if(str[i]==' ') flag=0;
		else flag=1;
	}
	return str;
}
