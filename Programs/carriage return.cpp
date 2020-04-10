class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> c;
	priority_queue<int, vector<int>, std::greater<int> > pq;
	for(int i=0;i<A.size();i++)
	{
		int b=A[i]*A[i];
		pq.push(b);
	}

	 while (!pq.empty()) 
    { 
        c.push_back(pq.top()); 
        pq.pop(); 
    } 
        return c;
        
    }
};
