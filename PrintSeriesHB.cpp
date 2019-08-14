#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#define ll long long
#define MAX 10000000
using namespace std;
void func(ll i,ll j)
{
	ll k=1,p=1;
	while(p<=i)
    {
    	if(((3*k+2)%j)!=0)
    	{
    		cout<<(3*k+2)<<endl;
    		p++;
    	}
    	k++;

    }
}
int main()
{
	ll i,j;
	cin>>i>>j;
	func(i,j);
	return 0;
}