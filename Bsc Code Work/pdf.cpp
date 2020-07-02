#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(int h[], string s) {
    
    int n = s.length();
    char a[n+1];
    strcpy(a, s.c_str()); 
     int b[n];
    for (int i=0; i<n; i++)
    {   
        b[i]=a[i]-97;   
    }
    int max=h[b[0]];
    for(int i=1;i<n;i++)
    {
    	if(max<h[b[i]])
    	{
    		max=h[b[i]];
    	}
    }
    return max*n;
       
    
    // Complete this function
}

int main() {
    int h[26];
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int result = designerPdfViewer(h, word);
    cout << result << endl;
    return 0;
}

