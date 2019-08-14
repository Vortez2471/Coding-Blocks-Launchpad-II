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

void remove(string s,string n)
{
	if(s.length()==1)
	{
		cout<<n+s[0];
	    return;
	}
	char ch=s[0];
	string cur=s.substr(1);
	if(ch==cur[0])
		remove(cur,n);
	else
		remove(cur,n+ch);
}

int main()
{
	string s,n="";
	cin>>s;
	remove(s,n);
}