//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string s1, string s2) {
        // code here
        string s="";
        unordered_map<char, int> mp;
        for(int i=0; i<s2.length(); i++){
            mp[s2[i]]=1;
        }
        for(int i=0; i<s1.length(); i++){
            if(mp[s1[i]]!=1)
            s.push_back(s1[i]);
        }
        return s;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}

// } Driver Code Ends