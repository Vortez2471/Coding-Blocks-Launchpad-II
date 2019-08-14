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
    int t;
    cin >> t;

    while(t--)
    {
        int a,b;
        cin >> a>>b;

        int sieve[b+1];
        sieve[0]=0;
        sieve[1]=0;

        for (int i = 2; i <= b; i++)
        {
            if((i&1)==0||i<a)
            {
                sieve[i]=0;
            }
            else
            {
                sieve[i]=1;
            }
        }
        if(2>=a)
        {
            sieve[2]=1;
        }
        for (int i = 3; i <=b; i+=2) 
        {

            int j=2;
            while(i*j<=b)
            {
                sieve[i*j]=0;
                j++;
            }
        }

        int count=0;
        for (int i = 0; i <=b; i++) 
        {
            if(sieve[i])
            {
                count++;
            }
        }

        cout << count <<endl;
    }
    return 0;
}
