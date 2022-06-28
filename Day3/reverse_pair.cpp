Use two for loops to find the count.
T.C=O(N * N)
S.C=O(1)

class Solution {
public:
    int reversePairs(vector<int>& nums) {
         int cnt=0;
       for(int i=0;i<nums.size();i++){
           for(int j=i+1;j<nums.size();j++){
               if(nums[i] > 2 * nums[j])cnt++;
           }
       }
        return cnt;
    }
};
OPTIMAL

use merge Sort
T.C=O(N log N) + O(N) + O(N)
S.C=O(N)

class Solution {
public:
    int merge(vector<int>& nums , int low ,int mid, int high){
        int cnt=0;
        int j=mid+1;
        for(int i=low;i<=mid;i++){
            while(j<=high && nums[i]>2LL*nums[j]){
                j++;
            }
            cnt+=(j-(mid+1));
        }
        vector<int> vct;
        int left=low;int right=mid+1;
        while(left<=mid && right<= high){
            if(nums[left]<=nums[right]){
                vct.push_back(nums[left++]);
            }else{
                vct.push_back(nums[right++]);
            }
        }
        while(left<=mid){
            vct.push_back(nums[left++]);
        }
        while(right<=high){
            vct.push_back(nums[right++]);
        }
        for(int i=low;i<=high;i++){
            nums[i]=vct[i-low];
        }
        return cnt;
    }
    int mergesort(vector<int>& nums , int low , int high){
        if(low>=high) return 0;
        int mid=(low+high)/2;
        int ans=mergesort(nums , low , mid);
        ans+=mergesort(nums , mid+1 , high);
        ans+=merge(nums , low, mid, high);
        return ans;
    }
    
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
    }
};
Do Upvote if you find it useful.
If you have any query , DM me on below Social media profile(usually active there) -
Instagram -"__asif18"
Twitter - "asif_iqubal01"
