class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        int prefix = 1;
        int sufix = 1;
        for(int i= 0;i<n;i++){
            if(prefix == 0) prefix =1;
            if(sufix == 0) sufix =1;
            prefix *= nums[i];
            sufix *= nums[n-i-1];
            ans = max(ans,max(prefix,sufix));
        }
        return ans;
        
    }
};