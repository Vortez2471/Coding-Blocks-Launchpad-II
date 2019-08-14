//https://www.youtube.com/watch?v=KCEPvdLqlYI
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

void generate(string input,string output)
{
  if(input.length()==0)
  {
  	cout<<output<<" ";
  	return;
  }
  generate(input.substr(1),output);          //Substr(1)...gives the string from 1 index
  generate(input.substr(1),output+input[0]);

}

int main()
{
	string s;
	cin>>s;

	generate(s,"");

	cout<<pow(2,s.length());

	return 0;
}