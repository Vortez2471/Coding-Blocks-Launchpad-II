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

int number(int arr[], int n) {
    int sum[64] = {0};
    for(int i=0;i<n;i++) 
    {
        int j=0;
        int num=arr[i];
        while(num>0) 
        {
            sum[j]=sum[j]+(num & 1);
            j++;
            num >>= 1;
        }
    }
    
    long ans=0;
    for(int i=0;i<64;i++) 
    {
        sum[i]=sum[i]%3;
        ans=ans+sum[i]*(1<<i);
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<number(arr, n);
    return 0;
}