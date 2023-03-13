//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        long sum=0;
        int mini=INT_MAX;
        // for sq
        for(int i=0; i<N; i++){
            if(B[i]>=4){
                mini=min(mini,A[i]);
                sum+=(B[i]/4)*A[i]*4;
                B[i]%=4;
            }
        }
        //for rect
        int cnt=0;
        for(int i=0; i<N; i++){
            if(B[i]>=2){
            cnt++;
            mini=min(mini,A[i]);
            sum+=A[i]*2;
            B[i]%=2;
            }
        }
        if(cnt%2==1) sum -= mini*2;
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N), B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
          cin>>B[i];
        }
        Solution obj;
        auto ans = obj.maxPossibleValue(N,A,B);
        cout<<ans<<endl;
    }
} 
// } Driver Code Ends