class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        insertionHelper(nums,nums.size());
        return nums;


    }
    void insertionHelper(vector<int>&nums,int n){
        if(n<=1)return;
        insertionHelper(nums,n-1);
        int last = nums[n-1];
        int j = n-2;
        while(j>=0 && nums[j]>last){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = last;
        
    }
};
