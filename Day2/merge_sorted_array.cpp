BRUTE FORCE
2nd vector ko first me push kr denge nd then first vector ko sort kr denge
T.C=O(Nlog(N)) + O(N)
S.C=O(1)

class Solution {
public:
   void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      for(int i=0;i<n;i++){
   nums1[m+i]=nums2[i];
}
sort(nums1.begin(),nums1.end());
      
   }
};

OPTIMAL
Dono ke last element ko comapare with two pointer.
T.C=O(M+N)
S.C=O(1)

class Solution {
public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int x=m-1,y=n-1;
      for(int i=m+n-1;i>=0;i--){
          if(y<0){
               break;
           }
          if(x<0){
              nums1[i]=nums2[y];
              y--;
          }
       else if(nums1[x]<=nums2[y]){
           nums1[i]=nums2[y];
           y--;
           
       }
          else{
              nums1[i]=nums1[x];
              x--;
          }
      }
     
  }
};
Do Upvote if you find it useful.
If you have any query , DM me on below Social media profile(usually active there) -
Instagram -"__asif18"
Twitter - "asif_iqubal01"
