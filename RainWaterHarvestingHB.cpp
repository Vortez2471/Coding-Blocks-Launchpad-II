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

int water(int arr[],int n)
{
    int water = 0; 

    int left_max = 0;     
    int right_max = 0;   

    int lo = 0;               
    int hi = n - 1;         

    while(lo <= hi)
    {

      if(arr[lo] < arr[hi])
      {         

        if(arr[lo] > left_max)
        {
          left_max = arr[lo];          
        }
        else
        { 

          water += left_max - arr[lo]; 
        }
        lo++;
      }
      else
      {

        if(arr[hi] > right_max)
        {
          right_max = arr[hi];              
        }
        else
        {
          water += right_max - arr[hi]; 
        }

        hi--;
      }

    }

    return water;  
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int a=water(arr,n);
  cout<<a<<endl;
}