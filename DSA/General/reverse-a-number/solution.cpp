class Solution {
public:
    int reverseNumber(int n) {
        int reverseNum = 0;
        while(n>0){
            int lastDigit = n%10;
            reverseNum = reverseNum*10+lastDigit;
            n = n/10;
        }
        return reverseNum;
        

    }
};