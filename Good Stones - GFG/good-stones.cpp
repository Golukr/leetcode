//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    int goodStones(int n,vector<int> &arr){
        vector<bool>reached(n,false);
        set<int>s;
        vector<int>tmp;
        for(int i=0;i<n;i++){
            if(reached[i])
                continue;
            int j=i;
            while(!reached[j]){
                reached[j]=true;
                tmp.push_back(j);
                j=j+arr[j];
                if(j>=n || j<0){
                    for(auto k:tmp){
                        s.insert(k);
                    }
                    tmp.clear();
                    break;
                }
            }
            if(tmp.size() && s.count(j)){
                for(auto k:tmp){
                    s.insert(k);
                }
            }
            tmp.clear();
        }
        return s.size();
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
        cout<<ob.goodStones(n,arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends