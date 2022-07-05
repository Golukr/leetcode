class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //worst case soln
        vector<int> ans;
        unordered_map<int,int> m;
        for(auto num1: nums1)
        {
            m[num1]++;
        }
        for(auto num2: nums2)
        {
           if(m[num2]-- >0)
           {
               ans.push_back(num2);
           }
        }
              return ans;
    }
};
            