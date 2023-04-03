//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++


class Solution
{

public:
    int xmod11(string x)
    {
      string s="";
      s+=x[0];
      int n=x.size();
      if(n==1){
          return x[0]-'0';
      }
      int ans=0;
      for(int i=1; i<n; i++){
          s+=x[i];
          int a=stoi(s);
          ans=a%11;
          s=to_string(ans);
      }
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
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends