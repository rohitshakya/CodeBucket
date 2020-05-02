class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size()!=0)
        {
            char *p=&s[0];
            char *q=&s[s.size()-1];
        for(int i=0;i<s.size()/2;i++)
        {
           char temp=*p;
           *p=*q;
           *q=temp;
           p++;
           q--;
        }
            
        }
        
            
    }
};
