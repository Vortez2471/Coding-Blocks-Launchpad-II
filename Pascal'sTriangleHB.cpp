#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<unordered_map>
#include<unordered_set>
#define ll long long
#define MAX 100000003
using namespace std;

int main() 
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int num=1;

       for(int spaces =1;spaces<=(n-i+1);spaces++)
        cout<<" ";
       for(int j=1;j<=i;j++)
       {
         if(j==1)
            cout<<j<<" ";
         else
         {
            num=num*(i-j+1)/(j-1);  
            cout<<num<<" ";
         }
       }
            cout<<endl;
    }
    return 0;
}