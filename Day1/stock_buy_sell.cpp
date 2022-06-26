BRUTE
Use two loops to find max profit
T.C=O(N*N)
S.C=O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int minPrice = INT_MAX;
         for(int i = 0; i < prices.size(); i++){
         for(int j=i+1;j<prices.size();j++){
             max_profit=max(max_profit,prices[j]-prices[i]);
         }
        }
return max_profit;
    }
};
BETTER
T.C=O(N)
S.C=O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int minPrice = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            maxPro = max(maxPro, prices[i] - minPrice);
        }
        return maxPro;
    }
};
Do upvote if you find it useful .
If you have any query ,DM me on insta id ( usually active there )- "__asif18"
