//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    bool isPowerOfFive(string s){
        int n=s.length();
        if(n==0) return false;
        if(s[0]=='0') return false;
        long long num=0;
        for(int i=0; i<n; i++){
            num=num*2+(s[i]-'0');
        }
        if(num==0) return false;
        while(num>1){
            if(num%5!=0) return false;
            num=num/5;
        }
        return true;
    }
    int cuts(string s){
       int n=s.length();
       if(n==0 || s[0]=='0'){
           return -1;
       }
      if(isPowerOfFive(s)){
          return 1;
      } 
        int mincuts=INT_MAX;
        for(int i=0; i<n; i++){
            string left=s.substr(0,i);
            string right=s.substr(i);
            if(isPowerOfFive(left)){
                int cutRight=cuts(right);
                if(cutRight!=-1){
                    mincuts=min(mincuts,1+cutRight);
                }
            }
        }
        if(mincuts!=INT_MAX){
            return mincuts;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   string s;
   while(t--)
   {
    cin>>s;
    Solution obj;
    int res=obj.cuts(s);
    cout<<res<<endl;

   }


    return 0;
}

// } Driver Code Ends