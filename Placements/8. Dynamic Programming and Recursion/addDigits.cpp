/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * title :  recursion/addDigits/leetcode
 */


class Solution {
public:
    int addDigits(int num) {
        if(num/10==0)
            return num;
        else
        {
        int sum=0;
        while(num)
        {
            sum=sum+num%10;
            num=num/10;
        }
         return addDigits(sum);
        
        }
            
    }
};
