class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //brute force approach
        vector<int> v;
        for(int i=0; i<nums1.size(); i++)
        {
            int a=-1;
            for(int j=nums2.size()-1; nums2[j]!=nums1[i]; j--)
            {
                if(nums1[i]<nums2[j])
                    a=nums2[j];
            }
            v.push_back(a);
}
        return v;
    }
};