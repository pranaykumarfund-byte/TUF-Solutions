class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int n = nums.size();
        int maxFreq = 0;
        int maxEle;
        unordered_map<int,int>mpp;
        for(int i= 0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            int ele = it.first;
            int freq = it.second;
            if(freq>maxFreq){
                maxFreq = freq;
                maxEle = ele;
            }else if(freq==maxFreq){
                maxEle = min(maxEle,ele);
            }
        }
        return maxEle;
    }
};