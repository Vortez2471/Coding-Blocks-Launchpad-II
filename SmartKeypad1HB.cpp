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
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void keypad(string s,string n)
{
	if(s.length()==0)
	{
		cout<<n<<endl;
		return;
	}
	char ch=s[0];
	s=s.substr(1);
	string a=table[ch-'0'];
    for(int i=0;i<a.length();i++)
    {
    	keypad(s,n+a[i]);
    }

}

int main()
{
	string s,n="";
	cin>>s;

	keypad(s,n);
  
}