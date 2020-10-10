int sum_fractions(std::vector<std::vector<int>> arr) {
	int lcm=1;
	for(int i=0;i<arr.size();i++)
	{
		lcm=lcm*arr[i][1];
	}
	int sum=0;
	for(int i=0;i<arr.size();i++)
	{
		sum=sum+(lcm/arr[i][1])*arr[i][0];
	}
	return sum/lcm;
	
	
}
