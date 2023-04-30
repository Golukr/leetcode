//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int powerfullInteger(int n,vector<vector<int>> &intervals,int k){
        map<int, int> mp;
        for(auto it: intervals){
            int l=it[0];
            int r=it[1];
            mp[l]++;
            mp[r+1]--;
        }
        int prefsum=0;
        int ans=-1;
        bool flag=false;
        for(auto it: mp){
            prefsum+=it.second;
            if(prefsum>=k){
                ans=it.first;
                flag=true;
            }else if(flag==true){
                ans=it.first-1;
                flag=false;
            }else{
                flag=false;
            }
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
        cin>>n;
        vector<vector<int>> intervals(n,vector<int>(2));
        for(int i=0;i<n;i++){
            cin>>intervals[i][0]>>intervals[i][1];
        }
        cin>>k;
        Solution ob;
        cout<<ob.powerfullInteger(n,intervals,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends