//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string ans="";
        string s="";
        for(int i=S.length()-1; i>=0; i--){
            if(S[i]=='.'){
                reverse(s.begin(),s.end());
                ans+=s;
                ans+=".";
                s="";
            }else{
                s+=S[i];
            }
        }
        reverse(s.begin(),s.end());
        ans+=s;
        return ans;
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends