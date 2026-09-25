class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i<n-1;i++){
            int minIndx = i;
            for(int j = i+1;j<n;j++){
                if(nums[j]<nums[minIndx]){
                    minIndx = j;
                }
            }
            if(minIndx != i){
                swap(nums[minIndx],nums[i]);
            }
        }
        return nums;
    }
};
