//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<string> numberPattern(int N)
    {
        // Write Your Code here
        vector<string> v;
        for(int i=1; i<=N; i++){
            string s="";
            for(int j=1; j<=i; j++){
                s+=to_string(j);
            }
            for(int k=i-1; k>=1; k--){
                s+=to_string(k);
            }
            v.push_back(s);
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
       
        Solution ob;
        vector<string> res = ob.numberPattern(N);
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    
    }
    return 0;
}
// } Driver Code Ends