class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> diff_pos; // to store diff pos of string
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]!=s2[i])
                diff_pos.push_back(i);
            if(diff_pos.size()>2)
                return false;
        }
        if(diff_pos.empty())
            return true;
        if(diff_pos.size()==2)
            swap(s2[diff_pos[1]],s2[diff_pos[0]]);
        return s1==s2;
    }
};