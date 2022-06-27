BRUTE FORCE
Simply hum ek new matrix lenge ,nd first row ko last column me,2nd row ko 2nd last column me nd so on..krte jaayenge..

T.C=O(N^2) + O(N^2)
S.C=O(N^2)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
           int n=matrix.size();
       int mat[n][n];
for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                mat[j][n-1-i]=matrix[i][j];
            }
        }
 for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[i][j]=mat[i][j];
            }
        }

    }
};


OPTIMAL

First we should transpose the matrix and then take reverse in each row to get required solution.
T.C=O(N^2)
S.C=O(1)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
           int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
                reverse(matrix[i].begin(),matrix[i].end());
            
        }
    }
};
Do upvote if you like the solution.
If you have any query, DM me on this insta id (mostly active there ) => "__asif18"
