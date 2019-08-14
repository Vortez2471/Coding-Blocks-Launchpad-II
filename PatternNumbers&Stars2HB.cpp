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

int main ()
{
    int i, j, n;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            cout << j;
        
        for (j = 1; j <= n - i; j++)
            cout << "*";

        cout << endl;
    }
    return 0;
}
