//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
             vector<int> pos;
            vector<int> neg;
            for(int i=0;i<n;i++){
                if(arr[i]>=0){
                    pos.push_back(arr[i]);
                }
                else{
                    neg.push_back(arr[i]);
                }
            }
            int s_neg=neg.size();
            int s_pos=pos.size();
            if(s_neg==0)return ;
            if(s_pos==0)return ;
            for(int i=0;i<s_neg;i++){
                arr[i]=neg[i];
            }
            int j=0;
            for(int i=s_neg;i<n;i++){
                arr[i]=pos[j++];

            }
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends