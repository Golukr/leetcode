//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string s1, string s2)
    {
        // Your code here
        if(s1.length()<2){
            if(s1==s2){
                return true;
            }else
            return false;
        }
        int n=s1.length();
        for(int i=0; i<n; i++){
            if(s1[i]!=s2[(i+2)%n] && s1[(i+2)%n]!=s2[i]){
                return false;
            }
        }
        return true;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends