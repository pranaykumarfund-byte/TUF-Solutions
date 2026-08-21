class Solution {
public:
    int largestDigit(int n) {
        int largestNum = INT_MIN;
        if(n == 0) return 0;
        while(n>0){
            int digits = n%10;
            largestNum = max(largestNum,digits);
            n = n/10;
        }
        return largestNum;

    }
};