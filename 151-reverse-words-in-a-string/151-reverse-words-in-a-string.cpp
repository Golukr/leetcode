class Solution {
public:
    string reverseWords(string s) {
        string temp;
        string ans;
        int n=s.length();
       for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {   temp="";
                while(i>=0 && s[i]!=' ')
                {
                    temp+=s[i];
                    i--;
                } 
             reverse(temp.begin(),temp.end());
                ans+=temp; 
                ans+=' ';
            } 
       }
       ans.pop_back();  
        return ans;
    }
};