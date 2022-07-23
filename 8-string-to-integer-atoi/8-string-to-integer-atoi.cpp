class Solution {
public:
    int myAtoi(string s) {
        int sign=1;
        int result=0;
        int index=0;
        int n=s.size();
        while(index<n && s[index]==' '){ // discardinding all whitespaces..
            index++;
        }
        // if positive sign=+1 othrwise sign = -1
        if(index<n && s[index]=='+'){
            sign=1;
            index++;
        }else if(index<n && s[index]=='-'){
            sign=-1;
            index++;
        }
        
        // Traverse next digits of input and stop if it is not a digit. 
        // End of string is also non-digit character.
        while (index < n && isdigit(s[index])) {
            int digit = s[index] - '0';

            // Check overflow and underflow conditions. 
            if ((result > INT_MAX / 10) || (result == INT_MAX / 10 && digit > INT_MAX % 10)) { 
                // If integer overflowed return 2^31-1, otherwise if underflowed return -2^31.    
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            
            // Append current digit to the result.
            result = 10 * result + digit;
            index++;
    }
        return sign*result;
    }
};