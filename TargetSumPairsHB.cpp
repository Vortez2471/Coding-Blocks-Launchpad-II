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
  ll n;
  cin>>n;
  ll arr[n];
  
  for(ll i=0;i<n;i++)
    cin>>arr[i];
  ll sum;
  cin>>sum;
  sort(arr,arr+n);
  ll j=n-1,i=0;
  while(i<n/2&&j>=n/2)
  {
    if(arr[i]+arr[j]<sum)
    {
      i++;
      continue;
    }
    else if(arr[i]+arr[j]>sum)
    {
      j--;
      continue;
    }
    else if(arr[i]+arr[j]==sum)
    {
      cout<<arr[i]<<" and "<<arr[j]<<endl;
      i++;
      j=n-1;
    }
  }

  return 0;
}