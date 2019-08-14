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

void Sum(int one[], int two[],int n,int m) 
{
        vector<int>ans;

        int i =n-1;
        int j =m-1;

        int carry = 0;

        while (i >= 0 || j >= 0) 
        {

            int sum = carry;

            if (i >= 0)
                sum += one[i];

            if (j >= 0)
                sum += two[j];

            int rem = sum % 10;
            ans.push_back(rem);
            carry = sum / 10;

            i--;
            j--;
        }

        if (carry != 0)
        {
            ans.push_back(carry);
        }

        for (i=ans.size()-1;i>=0;i--)
            cout<<ans[i]<<", ";

        cout<<"END";
}
int main()
{
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++)
        cin>>arr1[i];

    Sum(arr,arr1,n,m);

    return 0;
}