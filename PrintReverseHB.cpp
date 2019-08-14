#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
vector<int> vec;
int main()
{
	string s;
	cin>>s;
	for(int i=s.size()-1;i>=0;i--)
	{
		int st=s[i]-48;
		vec.push_back(st);
	}
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i];
	}
	return 0;
}