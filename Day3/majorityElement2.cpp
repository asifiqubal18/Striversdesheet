Brute Force
sort array and iterate over it to find majority elements
T.C=O(N logN) + O(N)
S.C=O(Size of ans vector)

BETTER

Use hash map
T.C=O(n log n)
S.C=O(N)

class Solution {
public:
 vector majorityElement(vector<int>& nums) {   // Time: O(N) :::: Aux_Space: O(N)
    
    map<int,int> mp;
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    
    int res = 0;
    
    for(auto x: mp){
        
        if(x.second > (nums.size()/3)){
           ans.push_back(x.first);
        }
        
    }
    return ans;
    
}
};
OPTIMAL

Use Boyer Moore Voting algorithm
T.C=O(N) + O(N)
S.C=O(1)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1=INT_MIN, num2=INT_MIN,cnt1=0,cnt2=0;
        int x=nums.size();
        for(int i=0;i<x;i++){
            if(nums[i]==num1)cnt1++;
            else if(nums[i]==num2)cnt2++;
            else if(cnt1==0){
                num1=nums[i];
                cnt1=1;
            }
            else if(cnt2==0){
                num2=nums[i];
                cnt2=1;
            }
            else{
                cnt1--;cnt2--;
            }
        }
        int tmp1=0,tmp2=0;
        for(int i=0;i<x;i++){
            if(nums[i]==num1)tmp1++;
            if(nums[i]==num2)tmp2++;
        }
        vector<int>ans;
        if(tmp1>x/3)ans.push_back(num1);
        if(tmp2>x/3)ans.push_back(num2);
        return ans;
    }
};
Do Upvote if you find it useful.
If you have any query , DM me on below Social media profile(usually active there) -
Instagram -"__asif18"
Twitter - "asif_iqubal01"
