Valid Perfect Square
Solution
Given a positive integer num, write a function which returns True if num is a perfect square else False.

Note: Do not use any built-in library function such as sqrt.

Example 1:

Input: 16
Output: true
Example 2:

Input: 14
Output: false

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<0)
        {
            return false;
        }
        if(num==0||num==1)
            return true;
        long long int start=1,end=num;
        while(start<=end)
        {
            long long int mid=(start+end)/2;
            if(mid*mid==num)
                return true;
            else if(mid*mid<num)
            {
                start=mid+1;
            }
            else
                end=mid-1;
        }
        return false;
        
    }
};
