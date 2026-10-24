class Solution {
public:
    bool isPerfect(int n) {
        int copy = n;
        int num =0;
        for(int i = 1;i<n;i++){
            if(n%i == 0){
                num+=i;
            }
        }
        if(num == copy) return true;
        else return false;
        


    }
};