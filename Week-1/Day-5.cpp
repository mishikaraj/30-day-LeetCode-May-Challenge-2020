Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.


Solution:


class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[s[i]]==1)
                return i;
        }
        return -1;
        
    }
};