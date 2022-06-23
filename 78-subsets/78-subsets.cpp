class Solution {
public:
    void help(int i, vector<int>&nums, vector<int>&temp, vector<vector<int>>&ans)
        
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
        }else
        {
            //to take the ith element
            temp.push_back(nums[i]);
            help(i+1,nums,temp,ans);
            temp.pop_back();
            //to ignore the ith element
            help(i+1,nums,temp,ans);
        }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        help(0,nums,temp,ans);
        return ans;
    }
};