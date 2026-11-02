class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        vector<int>ans;
        int target = n/3;
        for(int i= 0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it :mpp){
            if(it.second>target){
                ans.push_back(it.first);
            }
        }
        return ans;

        
    }
};