/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(logn)
 * Title : difference of product and sum
 */
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        while(n)
        {
            sum=sum+(n%10);
            product=product*(n%10);
            n=n/10;
        }
        return product-sum;
        
    }
};
