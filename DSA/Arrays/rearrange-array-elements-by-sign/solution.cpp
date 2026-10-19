class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int posIndx = 0,negIndx = 1;
        vector<int>ans(n,0);
        for(int i= 0;i<n;++i){
            if(nums[i]<0){
                ans[negIndx] = nums[i];
                negIndx+=2;
            }else{
                ans[posIndx] = nums[i];
                posIndx+=2;
            }
        }
        return ans;

        
        
        
        
    }
};