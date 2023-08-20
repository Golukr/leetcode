//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	private:
	bool check(int arr[],int n,int num){
	    int s=0,e=n-1;
	    int mid=s+(e-s)/2;
	    while(s<=e){
	        if(arr[mid]==num){
	            return true;
	        }else if(arr[mid]>num){
	            e=mid-1;
	        }else{
	            s=mid+1;
	        }
	        mid=s+(e-s)/2;
	    }
	    return false;
	}
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		sort(arr,arr+n);
		for(int i=A; i<=B; i++){
		    if(!check(arr,n,i)){
		        return false;
		    }
		}
		return true;
	}


		 

};
	

//{ Driver Code Starts.


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}







// } Driver Code Ends