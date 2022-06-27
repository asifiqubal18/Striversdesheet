#include<bits/stdc++.h>
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    int dsum=0,sum=0,dsq=0,sq=0;
    
    for(int i=0;i<n;i++){
        dsum+=i+1;
        dsq+=pow(i+1,2);
        sq+=pow(arr[i],2);
        sum+=arr[i];
    }
//     dsum-sum//m-r
//     dsq-sq//m2-r2
    int m=(dsum-sum+(dsq-sq)/(dsum-sum))/2;    
    int r=-1*((dsum-sum-(dsq-sq)/(dsum-sum))/2);
    return make_pair(m,r);
	
}
