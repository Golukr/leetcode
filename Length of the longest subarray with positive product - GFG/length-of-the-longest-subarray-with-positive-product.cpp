//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
           int poslen=0,neglen=0,maxlen=0;
           for(int i: arr){
               if(i==0){
               poslen=neglen=0;
           }else{
               if(i<0) swap(poslen,neglen);
               if(i>0 || poslen>0) poslen++;
               if(i<0 || neglen>0) neglen++;
               maxlen=max(maxlen,poslen);
           }
        }
        return maxlen;
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends