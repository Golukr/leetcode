class Solution {
public:
        void perm(vector<int> &nums,int i,int n,vector<vector<int>> &ans)
    {
        if(i==n-1)
        {
            ans.push_back(nums);
        }
        for(int j=i;j<n;j++)
        {
            swap(nums[i],nums[j]);
            perm(nums,i+1,n,ans);
            swap(nums[i],nums[j]);
        }
    }
        vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
            vector<vector<int>> ans;
            perm(nums,0,n,ans);
            return ans;
    }
};