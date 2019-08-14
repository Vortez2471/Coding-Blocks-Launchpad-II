#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
vector<ll> vec;
int main()
{
	ll n=0,t=0;
	while(1)
	{
      cin>>t;
      n=n+t;
      if(n<0)
      	break;
      else
      	vec.push_back(t);
	}
	for(ll i=0;i<vec.size();i++)
		cout<<vec[i]<<endl;
	return 0;
}