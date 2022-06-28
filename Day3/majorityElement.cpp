BRUTE FORCE

Simply use two loops to find the element .
T.O(N * log (N))
S.C=O(1)

class Solution {
public:
   int majorityElement(vector<int>& nums) { 
        
        sort(nums.begin(),nums.end());
        
        return (nums[nums.size()/2]);
        
    }
};
BETTER

Use hash map
T.C=O(n log n)
S.C=O(N)

class Solution {
public:
 int majorityElement(vector<int>& nums) {   // Time: O(N) :::: Aux_Space: O(N)
    
    map<int,int> mp;
    
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    
    int res = 0;
    
    for(auto x: mp){
        
        if(x.second > (nums.size()/2)){
            res = x.first;
        }
        
    }
    return res;
    
}
};
OPTIMAL

Use Moore Voting Algorithm
T.C=O(N) + O(N)
S.C=O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int elem=0;
        int x=nums.size();
        for(int i=0;i<x;i++){
        if(cnt==0)elem=nums[i];
            if(nums[i]==elem)cnt++;
            else cnt--;
            }
        return elem;
    }
};
Do Upvote if you find it useful.
If you have any query , DM me on below Social media profile(usually active there) -
Instagram -"__asif18"
Twitter - "asif_iqubal01"
