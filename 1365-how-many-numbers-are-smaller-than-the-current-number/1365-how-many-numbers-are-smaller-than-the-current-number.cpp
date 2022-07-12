class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        //Brute force 
        vector<int> ans;
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            int j=0,count=0;
            while(j<n)
            {
                if(j!=i && nums[i]>nums[j])
                    count++;
                j++;
            }
            ans.push_back(count);
            i++;
}
        return ans;
    }
};