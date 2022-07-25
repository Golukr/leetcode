class Solution {
public:
    int subtractProductAndSum(int n) {
        int pd=1;
        int sum=0;
        int res=0;
        while(n!=0)
        {
          int digit=n%10;
            n=n/10;
            sum += digit;
            pd *=digit;
        }
        return pd-sum;
    }
};