class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return ms(nums,0,n-1);
    }
private:
    long long int countPairs(vector<int>& nums,int low,int mid,int high){
        long long int count = 0;
        int right = mid+1;
        for(int i = low;i<=mid;i++){
            while(right<=high && (long long)nums[i]>2LL*nums[right]){
                right++;
            }
            count+= right-(mid+1);
        }
        return count;
    }
    long long int ms(vector<int>& nums,int low,int high){
        long long int count = 0;
        if(low>=high) return 0;
        long long int mid = low+(high-low)/2;
        count+= ms(nums,low,mid);
        count+= ms(nums,mid+1,high);
        count+= countPairs(nums,low,mid,high);
        merge(nums,low,mid,high);
        return count;
    }
    void merge(vector<int>& nums,int low ,int mid,int high){
        vector<int>temp;
        // int count = 0;
        int left = low;
        int right = mid+1;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }
        for(int i= low;i<=high;i++){
            nums[i] = temp[i-low];
        }
        // return count;
    }
};