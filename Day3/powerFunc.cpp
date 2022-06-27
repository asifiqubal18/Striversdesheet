OPTIMAL

T.C=O(log N)
S.C=O(1)

class Solution {
public:
    double myPow(double x, int n) {
    double res=1;
        long tmp=n;
        if(tmp<0)tmp= -1*tmp;
     while(tmp){
         if(tmp&1){
             res=res*x;
             tmp--;
         }
         else{
             x=x*x;
             tmp=tmp/2;
         }
     }
        if(n<0){
            res=(double)(1.0)/(double)(res);
        }
     return res;
    }
};

 

Do Upvote if you find it useful.
If you have any query , DM me on below Social media profile(usually active there) -
Instagram -"__asif18"
Twitter - "asif_iqubal01"
