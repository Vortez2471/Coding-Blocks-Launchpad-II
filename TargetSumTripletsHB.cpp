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
  
  
  for (ll i=0;i<n;i++)
     for (ll j=i+1;j<n;j++)
         for (ll k=j+1;k<n;k++)
            if (arr[i]+arr[j]+arr[k]==sum) 
                cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;

  return 0;
}



/*
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
  
  ll j=n-1,i=0,k=1;
  
  while(i<n/2&&j>=n/2)
  {
    if(k==n/2)
    {
      i++;
      k=i+1;
    }
    if(arr[i]+arr[k]+arr[j]<sum)
    {
      i++;
      k++;
      continue;
    }
    else if(arr[i]+arr[k]+arr[j]>sum)
    {
      j--;
      continue;
    }
    else if(arr[i]+arr[k]+arr[j]==sum)
    {
      cout<<arr[i]<<", "<<arr[k]<<" and "<<arr[j]<<endl;
      k++;
      j=n-1;
      continue;
    }
    if(k==n/2-1)
    {
      i++;
      k=i+1;
    }
  }

  return 0;
}    */