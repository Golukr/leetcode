//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
       string prefix=arr[0];
       int minlen=arr[0].size();
       for(int i=1; i<N; i++){
           if(arr[i].size() < minlen){
               minlen=arr[i].size();
               prefix=arr[i];
           }
       }
       for(int i=0; i<N; i++){
           string temp="";
           for(int j=0; j<minlen; j++){
               if(prefix[j]==arr[i][j]){
                   temp.push_back(prefix[j]);
               }else
               break;
           }
          prefix=temp;
           minlen=temp.size();
       }
       return minlen>0 ? prefix : "-1";
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends