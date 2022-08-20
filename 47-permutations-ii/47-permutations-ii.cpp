class Solution {
public:
    void helper(int pos,int n,vector<int> &nums,vector<vector<int>> &ans)
    {
        //base case
        if(pos>=n)
        {
            ans.push_back(nums);
            return;
        }
        
        unordered_set<int> set;
        for(int i=pos; i<n; i++)
        {
            if(set.find(nums[i]) !=set.end() )
               continue;
               set.insert(nums[i]);
                swap(nums[pos],nums[i]);
               helper(pos+1,n,nums,ans);
               //backtrack and undo the change we have done
               swap(nums[pos],nums[i]);
        }
               return;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(0,nums.size(),nums,ans);
        return ans;
    }
};