//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool decode (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << decode (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


bool decode (string S)
{
    if(S.length()<5) return false;
    string SS = "hello";
    int j=0;
    int cnt=0;
    for(int i=0; i<S.length(); i++){
        if(j<5 && S[i]==SS[j]){
            cnt++;
            j++;
        }
    }
    if(cnt==5)
    return true;
    else
    return false;
    
}