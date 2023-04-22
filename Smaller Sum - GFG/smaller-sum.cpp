//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
#define ll long long int
    vector<long long> smallerSum(int n,vector<int> &arr){
       map<ll, ll> mp; //to store frequency of each element
       unordered_map<ll, ll> presum; // prefix sum till every element
       for(int i=0; i<n; i++){
           mp[arr[i]]++;
       }
       ll prevsum=0;
       for(auto it: mp){
           presum[it.first]=prevsum;
           prevsum+=it.second*it.first;
       }
       vector<ll> ans;
       for(int i=0; i<n; i++){
           ll currans=presum[arr[i]];
           ans.push_back(currans);
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob; 
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends