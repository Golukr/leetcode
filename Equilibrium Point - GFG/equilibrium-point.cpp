//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
     long long tsum=0,lsum=0,rsum=0;
     int ans=-1;
     for(int i=0; i<n; i++){
         tsum+=a[i];
     }
     for(int i=0; i<n; i++){
         lsum=lsum+a[i];
         rsum=tsum-lsum-a[i+1];
         if(lsum==rsum){
             ans=i+1+1;
             break;
         }
     }
     return ans;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends