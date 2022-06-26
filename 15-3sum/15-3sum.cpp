class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int sum;
        int n =nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        for(int i=0; i<n-2; i++)
        {
            int value = nums[i];
                int left=i+1;
                int right=n-1;
                while(left<right)
                {
                    sum = nums[i] + nums[left] + nums[right];
                    if(sum==0)
                    {
                        s.insert({value,nums[left++],nums[right--]});
                       /* while(left<right && nums[left]==nums[left+1]) 
                        left++;
                        while(left<right && nums[right]==nums[right-1]) 
                        right--;
                        
                        left++;
                        right--;*/
                    }
                    else if(sum<0)
                    left++;
                    else
                        right--;

}
}
        for(auto x : s)
        {
            result.push_back(x);
        }
        return result;
    }
};