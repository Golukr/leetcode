class Solution {
public:
    char findTheDifference(string s, string t) {
        int S = 0; // count of ASCII of s
        int T = 0; // count of ASCII of t
        
        // count all ASCII values of string s
        for(char ch : s)
            S += ch;
        
        // count all ASCII values of string t
        for(char ch : t)
            T += ch;
        
        // At the end 
        // difference of count of T-S will be our answer
        return T-S; 
    }
};