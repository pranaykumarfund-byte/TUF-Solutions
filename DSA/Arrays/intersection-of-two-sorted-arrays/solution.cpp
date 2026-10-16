class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int i =0 ,j = 0;
        vector<int>intSec;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                i++;
            }else if(nums1[i]>nums2[j]){
                j++;
            }else {
                intSec.push_back(nums1[i]);
                i++;
                j++;
                
            }
        }
        return intSec;
    }
};