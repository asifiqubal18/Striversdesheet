BRUTE FORCE
Sort krke check krlenege
T.C=O(N logN)
SC.=O(1)

class Solution {
public:
   int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=1,maxx=1;
        if(n==1) return 1;
        if(n==0) return 0;
        for(int i=0;i<n-1;i++)
        {            
            if(nums[i]==nums[i+1]-1)
            {
                count++;
                maxx=max(maxx,count);
            }
            else if(nums[i]==nums[i+1])
                continue;
            else
                count=1;
        }
        return maxx;
    }
};
OPTIMAL

Vector ko set me daalenge , then check for element if it exists in set or not,
if exists check for another, else increse the number until it is not found in the set.
.TC=O(N) + O(N) +O(N)
S.C=O(N)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int longest=0;
        for(auto it:nums){
            if(!st.count(it-1)){
                int currentNum=it;
                int currentlong=1;
                while(st.count(currentNum+1)){
                    currentlong++;
                    currentNum++;
                }
                 longest=max(longest , currentlong);
            }
           
        }
        return longest;
    }
};
Do Upvote if you find it useful.
If you have any query , DM me on below Social media profile(usually active there) -
Instagram -"__asif18"
Twitter - "asif_iqubal01"
