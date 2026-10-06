class Solution {
public:
    int largestElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int largest = *(nums.end()-1);
        return largest;


    }
};