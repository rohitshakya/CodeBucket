#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
     
    int n = s.length(); 
    char a[n + 1];  
    strcpy(a, s.c_str()); 
    char p[n];
    int q=0;
    s="";
    for(int i=0;i<n+1;i++)
    {
        if(a[i]==a[i+1])
        {
            i=i+1;
        }
        else
        {
            s=s+a[i];
        
        }

    }
    
    
  
		return s;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

