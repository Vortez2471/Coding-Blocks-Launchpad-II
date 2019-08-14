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

void magic_park(char arr[1000][1000],int k,int s,int n,int m) 
{

        bool ans = false;
        for (int i=0;i<n;i++) 
        {
            for (int j=0;j<m;j++) 
            {
                char ch = arr[i][j];
                if(s<k) 
                {
                    ans = true;
                    break;
                }
                if(ch=='*') 
                {
                    s += 5;
                } 
                else if(ch=='.') 
                {
                    s -= 2;
                } 
                else 
                {
                    break;
                }
                if (j!=m-1)
                    s--;
            }
        }

        if (!ans)
            cout<<"Yes"<<"\n"<<s;
        else
            cout<<"No";
        
        cout<<endl;

}

int main() 
{
        int m,n,k,s;
        cin>>n>>m>>k>>s;
        char arr[1000][1000];

        for (int i=0;i<n;i++) 
            for (int j=0;j<m;j++) 
                cin>>arr[i][j];
        
        magic_park(arr,k,s,n,m);
        return 0;
}

