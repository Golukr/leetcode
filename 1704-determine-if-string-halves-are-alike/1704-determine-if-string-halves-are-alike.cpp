class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        int count1=0;
        for(int i=0; i<n/2; i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                count1++;
        }
        int count2=0;
        for(int i=n/2; i<n; i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                count2++;
        }
        if(count1==count2)
        {
            return true;
        }
          return false;
    }
};