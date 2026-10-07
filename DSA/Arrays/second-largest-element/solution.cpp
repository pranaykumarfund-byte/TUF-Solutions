class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();
        if(n<2){
            return -1;
        }
        sort(nums.begin(),nums.end());
        int largest = nums.back();
        int secondLargest = -1;
        for(int i = n-2;i>=0;i--){
            if(nums[i]!=largest){
                secondLargest = nums[i];
                break;
            }
        }
        return secondLargest;
      
    }
};