BRUTE FORCE

Use simply two loops to find the target nd print their indices.
T.C=O(N * N)
S.C=O(1)

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    for (int i = 0; i < nums.size(); ++i) {
   	 for (int j = i + 1; j < nums.size(); ++j) {
   		 if (nums[i] + nums[j] == target) {
   			 res.emplace_back(i);
   			 res.emplace_back(j);
   			 break;
   		 }
   	 }
   	 if (res.size() == 2)
   		 break;
    }
    return res;
} 
BETTER

Use two pointer Approach -
sort the array first , then
first pointer start pe rkhenge , nd 2nd last pe. If arr[first] + arr[last] ==target hota h toh print their indices, otherwise if arr[first] + arr[last] >target then decrease the last pointer by 1, else increase the first pointer.
T.C=O(N logN)
S.C=O(N)

vector<int> twoSum(vector<int>& nums, int target) {

    	vector<int> res,store;
    	store = nums;

    	sort(store.begin(), store.end());

    	int left=0,right=nums.size()-1;
    	int n1,n2;

    	while(left<right){
        	if(store[left]+store[right]==target){

            	n1 = store[left];
            	n2 = store[right];

            	break;

        	}
        	else if(store[left]+store[right]>target)
            	    right--;
        	else
            	    left++;
    	}

    	for(int i=0;i<nums.size();++i){

        	if(nums[i]==n1)
            	    res.emplace_back(i);
        	else if(nums[i]==n2)
            	    res.emplace_back(i);
    	}

    	    return res;
	}
OPTIMAL

Use map to retrieve the indices ,traverse the map for target - arr[i] ,if founded return the indices else iterate further.
T.C=O(N)
S.C=O(N)

class Solution {
public:
    vector<int> twoSum(vector<int>& ar, int target) {
        int n= ar.size();
        unordered_map<int,int> m; 
        for(int i=0;i<n;i++){
           if(m.find(target-ar[i])  != m.end()){
              return {i, m[target-ar[i]]};
           }
            m[ar[i]] = i;
        }
        return {-1};
    }
};
Do Upvote if you find it useful.
If you have any query , DM me on below Social media profile(usually active there) -
Instagram -"__asif18"
Twitter - "asif_iqubal01"
