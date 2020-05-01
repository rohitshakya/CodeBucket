/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  make a largest 69
 */
class Solution {
public:
    int maximum69Number (int num) {
        vector<int> p;
        while(num)
        {
            int a=num%10;
            p.push_back(a);
            num=num/10;
        }
        for(int i=p.size()-1;i>=0;i--)
        {
            if(p[i]%10==6)
            {
                p[i]=9;
                break;
            }
            
        }
        int sum=0;
        for(int i=p.size()-1;i>=0;i--)
        {
            sum=sum*10;
            sum+=p[i];
        }
        return sum;
        
    }
};
