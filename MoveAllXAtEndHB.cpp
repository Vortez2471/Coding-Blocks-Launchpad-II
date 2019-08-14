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

void remove(string s,string n,int count)
{
	if(s.length()==0)
	{
		cout<<n;
		for(int i=0;i<count;i++)
			cout<<'x';
	    return;
	}
	char ch=s[0];
	string cur=s.substr(1);
	if(ch=='x')
		remove(cur,n,count+1);
	else
		remove(cur,n+ch,count);
}

int main()
{
	string s,n="";
	cin>>s;
	remove(s,n,0);
}