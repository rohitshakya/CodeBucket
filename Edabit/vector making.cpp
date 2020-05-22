using namespace std;
std::vector<std::vector<int>> convertCartesian(std::vector<int> x, std::vector<int> y) {
vector<vector<int>> v;
	for(int i=0;i<x.size();i++)
	{
		v.push_back({x[i],y[i]});
	}
	return v;
}
