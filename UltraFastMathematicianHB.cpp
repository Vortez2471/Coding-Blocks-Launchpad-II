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
    string s1,s2;
    int t;
    cin>>t;
    while(t--)
    {
	    cin>>s1>>s2;
	    for (int i=0;i<s1.length();++i)
	    {
	    	cout<<((s1[i]-48)^(s2[i]-48));
	    }
	    cout<<endl;
    }
    return 0;
}