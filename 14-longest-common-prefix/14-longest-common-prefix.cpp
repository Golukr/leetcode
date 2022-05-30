class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string temp="";
        string check=strs[0];
        for(int i=0; i<strs.size(); i++)
        {
            for(int j=0; j<strs[i].size();  j++)
            {
                if(check[j]==strs[i][j])
                    temp=temp+check[j];
                else 
                    break;
            }
             check=temp;
             temp="";
        }
       
        return check;
    }
};