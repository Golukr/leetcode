//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
        int getCount (string s, int n)
        {
            int cnt=0;

            int m=s.size();

            unordered_map<char,int>mp;

            for(int i=0;i<m;i++){

              if(s[i]!=s[i+1])  mp[s[i]]++;

            }

            for(auto i:mp){

                if(i.second==n){

                    cnt++;

                }

            }

            return cnt;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends