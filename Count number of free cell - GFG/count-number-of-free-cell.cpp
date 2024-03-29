//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
        vector<long long int> ans;
        unordered_map<int,int> mrows;
        unordered_map<int,int> mcols;
        
        for(int i=0;i<arr.size();i++){
            int r=arr[i][0];
            int c=arr[i][1];
            
            mrows[r]++;
            mcols[c]++;
            
            long long int currAns=n*n - (n*(mrows.size()+mcols.size())-(mrows.size()*mcols.size()));
            ans.push_back(currAns);
        }
        
        return ans;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends