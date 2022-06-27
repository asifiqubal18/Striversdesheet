Simply use two for loops to traverse the array and to find the element.
T.C=O(N* N)
S.C=O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
   for(int i=0;i<matrix.size();i++){
       for(int j=0;j<matrix[0].size();j++){
           if(matrix[i][j]==target)return true;
       }
   }
        return false;
    }
};

OPTIMAL

Use Binary search to find the target in log n time.
T.C = O(log N)
S.C=O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int lo = 0;
if(!matrix.size()) return false;
int hi = (matrix.size() * matrix[0].size()) - 1;

    while(lo <= hi) {
        int mid = (lo + (hi - lo) / 2);
        if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target) {
            return true;
        }
        if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    return false;
    }
};

Do Upvote if you find it useful.
Do connect me on the below Social media profile (if you have any doubt)
Instagram -"__asif18"
Twitter - "asif_iqubal01"
