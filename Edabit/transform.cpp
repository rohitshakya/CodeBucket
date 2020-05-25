std::vector<int> transform(std::vector<int> arr) {
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]&1) arr[i]++;
		else arr[i]--;
	}
	return arr;
}
