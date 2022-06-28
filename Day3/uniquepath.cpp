RECURSION
class Solution {
public:
    
    int paths(int m, int n, int i, int j){
        if((i>=m) || (j>=n)){ return 0; }
        if((i==m-1 && j==n-1)) return 1;
        else return (paths(m, n, i+1, j) + paths(m, n, i, j+1));
    }
    
    int uniquePaths(int m, int n) {
        return paths(m, n, 0, 0);
    }
};

DYNAMIC PROGRAMMING
T.C=(M * N)
S.C=O(M * N)

class Solution {
public:
    int uniquePaths(int m, int n) {
        int a[m][n];
        for(int i=0;i<n;i++){
           a[0][i]=1; 
        }
        for(int j=1;j<m;j++){
            a[j][0]=1;    
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }
        return a[m-1][n-1];
    }
};
Do Upvote if you find it useful.
If you have any query , DM me on below Social media profile(usually active there) -
Instagram -"__asif18"
Twitter - "asif_iqubal01"
