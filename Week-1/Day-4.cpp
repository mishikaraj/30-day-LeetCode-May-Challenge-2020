Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.

 

Example 1:

Input: 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.


Solution:


class Solution {
public:
    int findComplement(int num) {
        unsigned int i=1;
        while(i<=num)
        {
            i = i << 1;
        }
        return (i-1)^num; 
    }
}; 


# num: 5 = 101; 
# i=1, after i<<1 shift left, i=10;
# i=100,i=1000; now i>num;
# 1000-1= 111; 111^101= 010 