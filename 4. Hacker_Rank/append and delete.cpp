#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    char a1[s.length()+1];
    char a2[t.length()+1];
    strcpy(a1, s.c_str()); 
    strcpy(a2, t.c_str());
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(a1[i]==a2[i])
        {
            count++;
        }
    }
    count=s.length()+t.length()-2*count;
    if(count<k)
    {
        return "Yes";
    }
    else 
    return "No";



}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

