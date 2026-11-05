class Solution {
public:
    long long int numberOfInversions(vector<int>& nums){
        int n = nums.size();
        return ms(nums,0,n-1);
    }
private:
    long long int ms(vector<int>& nums,int low,int high){
        long long int count = 0;
        if(low<high){
            int mid = low+(high-low)/2;
            count += ms(nums,low,mid);
            count += ms(nums,mid+1,high);
            count += merge(nums,low,mid,high);
            
        }
        return count;
    }
    long long int merge(vector<int>& nums,int low,int mid,int high){
        vector<int> temp;
        long long int count = 0;
        int left = low;
        int right = mid+1;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }else{
                temp.push_back(nums[right]);
                count += (mid-left+1);
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
        for(int i = 0;i<temp.size();i++){
            nums[low+i] = temp[i];
        }
        return count;
    }   


};