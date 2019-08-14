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

void Compression(string str) 
{
        vector<char> sb;
        vector<int>arr;
        int cnt=1,i=0;
        for (;i<str.size()-1;i++) 
        {

            if (str[i] == str[i + 1]) 
            {
                cnt++;
            }
            else 
            {
                sb.push_back(str[i]);
                arr.push_back(cnt);
                cnt=1;
            }
        }

        sb.push_back(str[i]);
        arr.push_back(cnt);
        for(int i=0;i<sb.size();i++)
        {
            cout<<sb[i]<<arr[i];
        }
}

int main()
{
    string s;
    cin>>s;
    Compression(s);
    return 0;
}