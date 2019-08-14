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

int main()
{
    int n,m;
    cin >> n;
    m=n;
    int array[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>array[i][j];

    for(int i=0;i<n;i++) 
        for(int j=i;j<m;j++)
            swap(array[i][j],array[j][i]);

    for(int i=0;i<n;i++) 
    {
        int lo = 0;
        int hi = n-1;
        while(lo<=hi) 
        {
            swap(array[lo][i],array[hi][i]);
            lo++;
            hi--;
        }
    }

    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<m;j++) 
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}