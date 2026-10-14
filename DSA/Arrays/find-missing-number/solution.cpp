class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xoR1 = 0,xoR2 = 0;
        for(int i= 0;i<n;i++){
            xoR2 = xoR2^(i+1);
            xoR1 = xoR1^nums[i];
        }
        return xoR1^xoR2;
    }
};