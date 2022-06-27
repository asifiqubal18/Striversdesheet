Sort it, then temporary variable me 1st pair lenge, then hr pair ke 1st element ko temp variable ke 2nd element se compare krenge, if it is <= then dono ke 2nd element max ko temp variable me rkhenge
else ans vector mr push_back kr denege.

T.C=O(Nlog(N)) +O(N)
S.C=O(N)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        if(intervals.size()==0) return ans;
        sort(intervals.begin(),intervals.end());
        vector<int> temp=intervals[0];
        for(auto it: intervals){
            if(it[0]<=temp[1]){
                temp[1]=max(it[1],temp[1]);
            }
            else{
                ans.push_back(temp);
                temp=it;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};
Do Upvote if you find it useful.
If you have any query , DM me on below Social media profile(usually active there) -
Instagram -"__asif18"
Twitter - "asif_iqubal01"
