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

int main() {
    ll n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
                {
                     ll temp = arr[i];
                     arr[i] = arr[j];
                     arr[j] = temp;
                }
        }

    }
    for (ll i = 0; i < n; i++)
        cout << arr[i] << endl;

}