class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int>nz;
        for(int i = 0;i<n;i++){
            if(nums[i]!=0){
                nz.push_back(nums[i]);
            }
        }
        for(int i= 0;i<nz.size();i++){
            nums[i]=nz[i];
        }
        for(int i= nz.size();i<n;i++){
            nums[i] = 0;
        }
        
    }
};