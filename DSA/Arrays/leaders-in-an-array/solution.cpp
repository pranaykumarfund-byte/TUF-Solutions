class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[nums.size()-1];
        vector<int>ans;
        ans.push_back(nums[nums.size()-1]);
        for(int i = n-2;i>=0;i--){
            if(nums[i]>maxi){
                ans.push_back(nums[i]);
                maxi = nums[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
      
      

    }
};