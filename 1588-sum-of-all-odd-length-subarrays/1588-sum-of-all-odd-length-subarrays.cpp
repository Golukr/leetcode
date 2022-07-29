class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0,n=arr.size(),x;
        for(int i=0; i<n; i++)
        {
            x=ceil((((i+1)*(n-i)))/(2*1.0)); // formula
        sum += x*arr[i];
        }
        return sum;
    }
};