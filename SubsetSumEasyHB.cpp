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
#define ll long long
#define pb push_back
#define pii pair<ll,ll> 
#define N 200005
#define PI 3.1415926535
using namespace std;

 bool Sum(ll arr[],ll n)
 {
    unordered_map<ll,ll>m;

    ll sum = 0;
    for(ll i = 0; i < n; i++) 
    {

        sum += arr[i];

        if (arr[i] == 0 || sum == 0 || m[sum] != NULL)
            return true;

        m[sum]=i;
    }

            return false;
    }
int main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	if(Sum(arr,n))
	{
		cout<<"Yes"<<endl;
	}
	else
		cout<<"No"<<endl;
   }
}