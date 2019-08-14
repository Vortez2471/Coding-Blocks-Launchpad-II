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
   int m, n;
    cin >> m >> n;
    int ut, uj;
    int a[m][n];
    for (ut = 0; ut < m; ut++)
        for (uj = 0; uj < n; uj++)
            cin >> a[ut][uj];

    int i, k = 0, l = 0;

    while (k < m && l < n)
    {
        for (i = k; i < m; ++i)
            {
                cout<<a[i][l]<<", ";
            }
            l++;    

        for (i = l; i < n; ++i)
            {
                cout<<a[m-1][i]<<", ";
            }
            m--;

        for (i = m-1; i >=k; --i)
        {
            cout<<a[i][n-1]<<", ";
        }
        n--;

        for (i = n-1; i >=l; --i)
        {
            cout<<a[k][i]<<", ";
        }
        k++;
    }
    cout << "END";
    return 0;
}