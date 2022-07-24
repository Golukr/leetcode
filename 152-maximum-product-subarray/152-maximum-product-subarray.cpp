class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int ans=nums[0];
        int n=nums.size();
        int maxsub=nums[0];
        int minsub=nums[0];
        if(nums.size()==0)
        {
            return 0;
        }
        for(int i=1; i<n; i++)
        {
            if(nums[i]<0)
                swap(maxsub,minsub);
            
            maxsub=max(nums[i]*maxsub,nums[i]);
            minsub=min(nums[i]*minsub,nums[i]);
        
        if(ans<maxsub)
            ans=maxsub;
        }
        return ans;
    }
};