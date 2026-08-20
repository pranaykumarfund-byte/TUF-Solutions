class Solution {
public:
    int countOddDigit(int n) {
        int even = 0;
        int odd = 0;
        if(n == 0) even++;
        while(n!=0){
            int num = n%10;
            if(num%2 == 0) even++;
            else odd++;
            n = n/10;
        }
        return odd;

    }
};