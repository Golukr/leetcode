class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int pd_sum=0,sd_sum=0,sum;
        int n=mat.size();
        for(int i=0; i<mat.size(); i++)
        {
            pd_sum += mat[i][i];
            sd_sum += mat[i][n-i-1];
        }
        if(n%2==0)
            return pd_sum+sd_sum;
        else 
            return pd_sum+sd_sum - mat[n/2][n/2];
    }
};