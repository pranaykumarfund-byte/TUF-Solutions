class Solution {
public:
    bool isArmstrong(int n) {
        if(n == 0) return true;
      int ans = n;
      int count = 0;
      int armstrong = 0;
      int temp = n;
      while(temp>0){
        int digits = temp%10;
        count++;
        temp = temp/10;
      }
      temp = n;
      while(temp>0){
        int digits1 = temp%10;
        armstrong = armstrong+pow(digits1,count);
        temp = temp/10;
      }
      if(ans == armstrong) return true;
      else return false;
    }
    
};