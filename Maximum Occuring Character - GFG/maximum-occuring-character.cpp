//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        unordered_map<char, int> mp;
        for(char ch: str){
            mp[ch]++;
        }
        int mx=INT_MIN;
        
        for(auto it: mp){
            if(it.second>mx){
            mx=it.second;
            }
        }
        vector<char> v;
        for(auto it: mp){
            if(it.second==mx){
                v.push_back(it.first);
            }
        }
        sort(v.begin(),v.end());
        return v[0];
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends