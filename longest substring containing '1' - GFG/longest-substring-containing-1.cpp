//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxlength(string s);
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
cout<<maxlength(s)<<endl;
}
return 0;
}

// } Driver Code Ends


int maxlength( string s)
{
// your code here
   int maxl=0;
   int cnt;
   for(int i=0; i<s.size(); i++){
       cnt=0;
       while(s[i]=='1'){
           cnt++;
           i++;
       }
       if(cnt>maxl){
           maxl=cnt;
       }
   }
   return maxl;
}