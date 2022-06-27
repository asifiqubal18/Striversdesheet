BRUTE FORCE

Sort krenge, then do for loop chakayenge nd equal milte hi return kr denge given element
T.C=O(N log(N)) +o(N)
S.C=O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
  int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};
BETTER

Simply use map data structure
T.C=O(N)
S.C=O(N)

class Solution {
	public:
		int findDuplicate(vector<int>& nums) {
		unordered_map<int,int>m;
		for(auto i:nums)
		{
			m[i]++;
		}
		int ans;
		for(auto j:m)
		{
			if(j.second>=2)ans=j.first;
		}
		return ans;
		}
	};
OPTIMAL

Use Floyd Tortoise Method
T.C=O(N)
S.C=O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // Find the intersection point of the two runners.
        int tortoise = nums[0];
        int hare = nums[0];

        do {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while (tortoise != hare);

        // Find the "entrance" to the cycle.
        tortoise = nums[0];
        while (tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return hare;
    }
};
Do Upvote if you find it useful.
If you have any query , DM me on below Social media profile(usually active there) -
Instagram -"__asif18"
Twitter - "asif_iqubal01"
