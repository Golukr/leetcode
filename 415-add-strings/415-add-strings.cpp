class Solution {
public:
    string addStrings(string num1, string num2) {
     string res="";
        int i=num1.length()-1;
        int j=num2.length()-1;
        int carry=0;
        while(i>=0 || j>= 0){
            if(i>=0) carry += num1[i--] - '0';
            if(j>=0) carry += num2[j--] - '0';
            res = to_string(carry%10) + res;
            carry /= 10;
        }
        return carry ? "1" + res : res;
    }
};