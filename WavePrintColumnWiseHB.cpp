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
using namespace std;

int main ()
{
	ll n,m;
	cin>>n>>m;
	ll arr[101][101];

	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
		   cin>>arr[i][j];
		}
	}
   for(ll j=0;j<m;j++)
   {
       if(j%2==0)
           for(ll i=0;i<n;i++)
               cout<<arr[i][j]<<", ";
       else
           for(ll i=n-1;i>=0;i--)
               cout<<arr[i][j]<<", ";
   }
   cout<<"END";

    return 0;
}