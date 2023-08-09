//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    string removeSpecialCharacter(string s) {
        // code here
        string ans="";
        for(char ch : s){
            if(isalpha(ch)){
                ans+=ch;
            }
        }
        
        return ans.size()==0?"-1":ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.removeSpecialCharacter(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends