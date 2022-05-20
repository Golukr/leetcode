class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size()==1) return s;
        
        stack<char> st;
        for(int index=0; index<s.size(); index++) {
            if(st.empty()) {
                st.push(s[index]);
            }
            else if(st.top()==s[index]) {
                st.pop();
            }
            else {
                st.push(s[index]);
            }
        }
        string result = "";
        while(!(st.empty())) {
            result = st.top() + result;
            st.pop();
        }
        return result;
    }
};