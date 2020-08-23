std::string grabCity(std::string str) {
	std::string s="";
	int m;
	for(int i=str.length()-1;i>=0;i--)
	{
		if(str[i]=='[')
		{
			m=i;
			break;
		}
	}
	for(int i=m+1;i<str.length()-1;i++)
	{
		s=s+str[i];
	}
	return s;
}
