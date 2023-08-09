//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        string s="";
        
         unordered_map<char, int> mp1;
        for(char ch: s2){
            mp1[ch]=1;
        }
        for(char ch: s1){
            if(mp1[ch]!=1)
            s.push_back(ch);
        }
        unordered_map<char, int> mp;
        for(char ch: s1){
            mp[ch]=1;
        }
        for(char ch: s2){
            if(mp[ch]!=1)
            s.push_back(ch);
        }
        if(s.size()==0){
            return "-1";
        }else{
            return s;
        }
    }

};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

// } Driver Code Ends