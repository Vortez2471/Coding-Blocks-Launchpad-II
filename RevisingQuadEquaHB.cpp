#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
void quad(ll a,ll b,ll c)
{
	ll sum=b*b-4*a*c;
	if(sum<0)
		cout<<"Imaginary";
	if(sum==0)
		cout<<"Real and Equal\n"<<(-b/(2*a))<<" "<<(-b/(2*a));
	else
		cout<<"Real and Distinct\n"<<((-b-sqrt(sum))/(2*a))<<" "<<((-b+sqrt(sum))/(2*a));
}
int main()
{
	ll a,b,c;
	cin>>a>>b>>c;
	quad(a,b,c);
	return 0;
}