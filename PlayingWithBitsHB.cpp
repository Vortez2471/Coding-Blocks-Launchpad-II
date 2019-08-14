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

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,sum=0;
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
           sum=sum+__builtin_popcount(i);
		}
		cout<<sum<<endl;
	}
	return 0;
}