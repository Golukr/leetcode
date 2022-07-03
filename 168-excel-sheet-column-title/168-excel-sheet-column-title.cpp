class Solution {
public:
    string convertToTitle(int n) {
        string result="";
        while(n){ // n=columNumber
            
            char c= 'A' + (n-1)%26;
            result=c+result;
            n = (n-1)/26;
}
        return result;
    }
};