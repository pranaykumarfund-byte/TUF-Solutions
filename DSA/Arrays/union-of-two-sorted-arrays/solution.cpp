class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> Union;
        int i = 0,j = 0;
        int m = nums1.size();
        int n = nums2.size();
        
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                if(Union.size() == 0 || Union.back() != nums1[i]){
                    Union.push_back(nums1[i]);
                
                }
                i++;
            }else{
                if(Union.size() == 0 || Union.back() != nums2[j]){
                    Union.push_back(nums2[j]);
                }
                j++;
            }
        }
        while(i<m){
            if(Union.size() == 0 || Union.back() != nums1[i]){
                Union.push_back(nums1[i]);
            }
            i++;
        }
        while(j<n){
            if(Union.size() == 0 || Union.back() != nums2[j]){
                Union.push_back(nums2[j]);
            
            }
            j++;

        }
        return Union;
    }
};