// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector< vector<int> > &A) {
    // write your code in C++14 (g++ 6.2.0)
    
	int row=A.size();
	int col=A[0].size();
	long long max=0;	
	int i,j;
	for(i=0;i<row-1;i++)
	{
		int k=0;
		int ele1=A[i][k];
		for(j=i+1;j<col;j++)
		{
			int ele2=A[i+1][j];
			if(j==k)
			{
				max=0;
			}
			long long sum=ele1+ele2;
			if(sum>max)
			{
				max=sum;
			}
		}
	}
	
	return max;

}

