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

void remove(char*s,int n)
{
	if(s[n]=='\0')
		return;
	if(s[n]=='p'&&s[n+1]=='i')
	{
		int j=n+2;
		while(s[j]!='\0')
			j++;
		while(j>n+1)
		{
			s[j+2]=s[j];
			j--;
		}
        s[n]='3';
        s[n+1]='.';
        s[n+2]='1';
        s[n+3]='4';
        remove(s,n+4);
        return;
	}
	else
		remove(s,n+1);
  	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[1004];
		cin>>a;
		remove(a,0);
		cout<<a<<endl;
    }

}