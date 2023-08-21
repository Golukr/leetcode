//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int cnt = 0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int z = 0;
                if(matrix[i][j] == 1){
                    if(i-1 >= 0 && matrix[i-1][j] == 0)z++;
                    if(j-1 >= 0 && matrix[i][j-1] == 0)z++;
                    if(i+1 < m && matrix[i+1][j] == 0)z++;
                    if(j+1 < n && matrix[i][j+1] == 0)z++;
                    if(i+1 < m && j+1 < n && matrix[i+1][j+1] == 0)z++;
                    if(i+1 < m && j-1 >= 0 && matrix[i+1][j-1] == 0)z++;
                    if(i-1 >= 0 && j+1 < n && matrix[i-1][j+1] == 0)z++;
                    if(i-1 >= 0 && j-1 >= 0 && matrix[i-1][j-1] == 0)z++;
                }
                if(z>0 && z%2==0)cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends