/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n^2)
 * Title :  hourglass
 */
#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    vector<int> v;
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
            int sum=arr[i][j]+arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i+1][j]+arr[i+1][j-1]+arr[i+1][j+1];
            v.push_back(sum);
             sum=0;

        }
    }
     
    vector<int>::iterator it;
    it=max_element(v.begin(),v.end());
    return *it;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

