const int MAX = 256;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) { 
    int count[MAX] = {0}; 
    for (int i = 0; i < magazine.length(); i++) 
        count[magazine[i]]++; 
          
    // Now traverse through str2 to check 
    // if every character has enough counts 
    for (int i = 0; i < ransomNote.length(); i++) 
    { 
        if (count[ransomNote[i]] == 0) 
           return false; 
        count[ransomNote[i]]--; 
    } 
    return true; 
}
};