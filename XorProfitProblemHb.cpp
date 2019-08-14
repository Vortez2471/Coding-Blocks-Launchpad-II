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

int main()
{
    int x,y;
    cin>>x>>y;
    int n;
    n=x^y;
    int set=0;
    while(n) 
    {
        n=n>>1;
        set++;
    }
    int result = 1;
    while(set--) 
    {
        result=result<<1;
    }
    cout<<result-1;

    return 0;
}