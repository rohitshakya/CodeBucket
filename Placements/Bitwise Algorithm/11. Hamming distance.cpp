//hamming distance: no of flipped bits while xor of a and b
class Solution {
public:
    int hammingDistance(int x, int y) {
        int result=x^y;
        int count=0;
        while(result)
        {
            if(result&1)
            {
                count++;
            }
            result>>=1;
        }
        return count;
    }
};
