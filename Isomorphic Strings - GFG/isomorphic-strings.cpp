//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
       if(str1.length()!=str2.length()){
           return false;
       }
       int n=str1.length();
       unordered_map<char, char> mp;
       for(int i=0; i<n; i++){         // simple solution
           if(mp.empty()){
               mp[str1[i]]=str2[i];
           }else{
               char key=str1[i];
               char value=str2[i];
               for(auto it: mp){
                   if(it.first==key && it.second!=value || it.first!=key && it.second==value){
                       return false;
                   }
               }
               mp[key]=value;
           }
       }
       return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends