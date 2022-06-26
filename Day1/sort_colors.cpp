BRUTE
T.C=O(nLog(n))
S.C=O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
      sort(nums.begin(),nums.end());
    }
};
BETTER

T.C=O(N)+O(N)
S.C=O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
       int cnt0=0,cnt1=0,cnt2=0;
for(int i=0;i<nums.size();i++){
    if(nums[i]==0)cnt0++;
    else if(nums[i]==1)cnt1++;
    else cnt2++;
}
for(int i=0;i<nums.size();i++){
    if(cnt0>0){cnt0--;nums[i]=0;}
    else if(cnt0==0 && cnt1>0){
        cnt1--;
        nums[i]=1;
    }
    else nums[i]=2;
}
    }
};
OPTIMAL
T.C=O(nLog(n))
S.C=O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo = 0; 
        int hi = nums.size() - 1; 
        int mid = 0; 

        while (mid <= hi) { 
            switch (nums[mid]) { 

            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

            case 1: 
                mid++; 
                break; 

            case 2: 
                swap(nums[mid], nums[hi--]); 
                break; 
            }
        }
         
    }
};
Do upvote if you find it useful.
If you have any query , dm me on insta id(usually active there) -"__asif18"
