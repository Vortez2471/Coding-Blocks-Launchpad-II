#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<list>
#include<unordered_map>
#include<unordered_set>
#define ll long long
#define MAX 100000003
#define MAX_RLEN 50
using namespace std;

bool check_ith_setbit(long i,long m)
{
   if(i&m)
     return 1;
   else
      return 0;
}

int main() 
{
	long n,s=0;
	bool t=0;
	cin>>n;
	long arr[n];
	vector<long> v1;
	vector<long> v2;
	for(long i=0;i<n;i++)
	   cin>>arr[i];
	for(long i=0;i<n;i++)
	   s=s^arr[i];
	for(long i=0;i<n;i++)
	{
		t=check_ith_setbit(arr[i],s);
		if(t)
		  v1.push_back(arr[i]);
		else
		  v2.push_back(arr[i]);
	}
	
	s=0;
	for(long i=0;i!=v2.size();i++)
	  s=s^v2[i];
	cout<<s<<" ";

	s=0;
	for(long i=0;i!=v1.size();i++)
	  s=s^v1[i];
    cout<<s;
	return 0;
}