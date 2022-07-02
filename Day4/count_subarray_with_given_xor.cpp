#include<bits/stdc++.h>
int subarraysXor(vector<int> &arr, int x)
{
   map<int,int> mp;
	int xorr=0;
	int count=0;
	for(auto it:arr){
		xorr ^=it;
		if(xorr==x)count++;
		if(mp.find(xorr^x)!=mp.end()){
				count+=mp[xorr ^ x];
			}
			mp[xorr]+=1;
		
	}
	return count;
}
