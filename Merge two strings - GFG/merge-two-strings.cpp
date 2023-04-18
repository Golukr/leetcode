//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
   string res="";
   for(int i=0; i<max(S1.size(),S2.size()); i++){
       if(i<S1.size()){
           res+=S1[i];
       }
       if(i<S2.size()){
           res+=S2[i];
       }
   }
   return res;
}