#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    char a[n+1];
    int g=0,count=0,flag=0;
    strcpy(a,s.c_str());
    for(int i=0;i<n+1;i++)
    {
        cout<<a[i];
    }
    for(int i=0;i<=n;i++)
    {
        if(a[i]=='D')
        {
            g--;
        }
        if(a[i]=='U')
        {
            g++;
        }
        if(g<0)
        {
            if(flag==0)
            count++;
            flag=1;    
        }
        if(g==0)
        {
            flag=0;
        }
        
    }
    return count;
    



}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

