//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string s)
    {
    	int sum=0;
    	int num=0;
    	for(int i=0; i<s.size(); i++){
    	    if(s[i]>='0' && s[i]<='9'){
    	        num=num*10+(s[i]-'0');
    	    }else{
    	       
    	        sum+=num;
    	        num=0;
    	    }
    	}
    	return sum+num;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends