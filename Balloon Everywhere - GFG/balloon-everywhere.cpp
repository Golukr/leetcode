//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
            unordered_map<char,int> mp;

       for(int i  =0  ; i < s.length()  ;i++)

       {

            if(s[i] == 'b' || s[i] == 'a'|| s[i] == 'n' || s[i] == 'l' || s[i] == 'o')

            mp[s[i]]++;

       }

       if(mp.size() < 5)

       return 0;

       

       int minban = 1e9;

       int minol = 1e9;

       for(auto x : mp)

       {

           if(x.first == 'b' || x.first == 'a'|| x.first == 'n')

           minban = min(minban,x.second);

           else if(x.first == 'l' || x.first == 'o')

           minol = min(minol,x.second);

       }

       

       if(minol <2 || minban < 1)

       return 0;

       else

       {

           return min(minban,minol/2);
       }
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends