#include <bits/stdc++.h>

using namespace std;

long raceAgainstTime(int n, int mason_height, vector <int> heights, vector <int> prices) {
    int flag=0;
    int pos=0;
    int cost=0;
    for(int i=0;i<n-1;i++)
    {
        if(heights[i]>mason_height)
        {
            flag=1;
            pos=i;
            i=pos+1;
            break;
        }
    }
    cout<<pos;
    pos=pos+1;
    cost=pos+cost;
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    int mason_height;
    cin >> mason_height;
    vector<int> heights(n-1);
    for(int heights_i = 0; heights_i < n-1; heights_i++){
       cin >> heights[heights_i];
    }
    vector<int> prices(n-1);
    for(int prices_i = 0; prices_i < n-1; prices_i++){
       cin >> prices[prices_i];
    }
    long result = raceAgainstTime(n, mason_height, heights, prices);
    //cout << result << endl;
    return 0;
}

