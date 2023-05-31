//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        map<int, int> mp;
        vector<int> v;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        int min=INT_MAX;
        for(auto x: mp){
            int p=x.second;
            if(p<min){
                min=p;
            }
        }
        for(auto it: mp){
            if(min==it.second){
                v.push_back(it.first);
            }
        }
        int ans=*max_element(v.begin(),v.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends