T.C = O(n * m) * O(n * m) + O(n*m)
S.C = O(1)

#define INF 1e9
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0 = 1, rows = matrix.size(), cols = matrix[0].size();

    for (int i = 0; i < rows; i++) {
        for(int j=0;j<cols;j++){
            if(matrix[i][j]==0){
                for(int k=0;k<cols;k++){
                   if(matrix[i][k]!=0){
                       matrix[i][k]=INF;
                   }
                }
            }
             if(matrix[i][j]==0){
                for(int k=0;k<rows;k++){
                   if(matrix[k][j]!=0){
                       matrix[k][j]=INF;
                   }
                }
            }
           
        }
    }
        for (int i = 0; i < rows; i++) {
        for(int j=0;j<cols;j++){
            
            if(matrix[i][j]==INF){
                matrix[i][j]=0;
            }
            
        }}
        

    }
};
BETTER
T.C = O(n * m) + 2 * O(n * m)
S.C =O(n) + O(m)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> u;
        vector<int> v;
        int rowsize=matrix.size();
        int colsize=matrix[0].size();
        for(int i=0;i<rowsize;i++){
            for(int j=0;j<colsize;j++){
                if(matrix[i][j]==0){
                    u.push_back(i);
                    v.push_back(j);
                }
            }
        }
        for(int m=0;m<u.size();m++){
            for(int p=0;p<colsize;p++){
            matrix[u[m]][p]=0;
        }
        }
        for(int n=0;n<v.size();n++){
          for(int q=0;q<rowsize;q++){
            matrix[q][v[n]]=0;
        }
        }
        
    }
};
OPTIMAL
T.C = O(n * m) + O(n * m)
S.C =O(1)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0 = 1, rows = matrix.size(), cols = matrix[0].size();

    for (int i = 0; i < rows; i++) {
        if (matrix[i][0] == 0) col0 = 0;
        for (int j = 1; j < cols; j++)
            if (matrix[i][j] == 0)
                matrix[i][0] = matrix[0][j] = 0;
    }

    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 1; j--)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        if (col0 == 0) matrix[i][0] = 0;
    }
    }
};

Do Upvote if this is helpful
