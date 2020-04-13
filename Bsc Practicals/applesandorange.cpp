#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b,int apples[],int oranges[],int m,int n) {
	int countapp=0;
	int countora=0;
	for(int i=0;i<m;i++)
	{
		if(apples[i]>=s-a&&apples[i]<=t-a)
		{
			countapp++;
		}
		
	}
	for(int i=0;i<n;i++)
	{
        
		if(oranges[i]>=s-b&&oranges[i]<=t-b)
		{
			countora++;
		}
	}
	cout<<countapp<<endl<<countora;

    
}

int main() {
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    int apple[m];
    for(int apple_i = 0; apple_i < m; apple_i++){
       cin >> apple[apple_i];
    }
    int orange[n];
    for(int orange_i = 0; orange_i < n; orange_i++){
       cin >> orange[orange_i];
    }
    countApplesAndOranges(s, t, a, b, apple, orange,m,n);
    return 0;
}

