class Solution {
public:
    bool isPalindrome(int n) {
       int ans = n;
       int reverseNum = 0;
       while(n>0){
        int num = n%10;
        reverseNum = reverseNum*10+num;
        n = n/10; 
       }
       if(ans == reverseNum) return true;
       else return false;


    }
};