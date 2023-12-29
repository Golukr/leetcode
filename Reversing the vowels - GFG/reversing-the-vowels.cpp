//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    private:
    bool isVowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            return true;
        }
        return false;
    }
    public:
        string modify (string s)
        {
            //code here.
            string temp="";
            for(char ch: s){
                if(isVowel(ch)){
                    temp.push_back(ch);
                }
            }
            reverse(temp.begin(),temp.end());
            int j=0;
            for(int i=0; i<s.size(); i++){
                if(isVowel(s[i])){
                    s[i]=temp[j++];
                }
            }
            return s;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends