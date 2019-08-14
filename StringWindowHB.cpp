#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<cstring>
#include<list>
#include<vector>
#include<bitset>
#include<unordered_map>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
// #include "boost/algorithm/string.hpp"
#define fio ios_base::sync_with_stdio(false)
#define mod 998244353
#define mod1 mod
#define mod2 1000000007
#define li long long int
#define ll li
//#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define readi(x) scanf("%d",&x)
#define  reads(x)  scanf("%s", x)
#define readl(x) scanf("%I64d",&x)
#define rep(i,n) for(i=0;i<n;i++)
#define revp(i,n) for(i=(n-1);i>=0;i--)
#define myrep1(i,a,b) for(i=a;i<=b;i++)
#define myrep2(i,a,b) for(i=b;i>=a;i--)
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
#define MAXN 1000000000000000005
#define MINN -1000000000000000000
#define INTMAX 1000001000
#define pii pair<ll,ll>
#define pdd pair<double,double>
#define pic pair<int,char>
#define N 200005
#define lgn 20
#define ddouble long double
#define minus minu
#define PI 3.1415926535
#define lgn 20


// #define INTMAX 200000000

// using namespace boost;
// #define si short int

using namespace std;
using namespace __gnu_pbds;
typedef priority_queue<ll, vector<ll > > max_pq;
typedef priority_queue<ll, vector<ll> , greater<ll>  > min_pq;
ll toint(const string &s) {stringstream ss; ss << s; ll x; ss >> x; return x;}
string tostring ( ll number ){stringstream ss; ss<< number; return ss.str();}

// using namespace __gnu_pbds;
// typedef priority_queue<pair<ll,char> , vector<pair<ll , char> > > max_pq;
// typedef priority_queue<pii , vector<pii > ,greater<pii > > min_pq;
typedef tree<pii , null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> OST;
// typedef priority_queue<pair < ll , pair < pii , ll > >  , vector<pair < ll , pair < pii , ll > >  > ,greater<pair < ll , pair < pii , ll > >  > > min_pq;
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cout << name << " : " << arg1 << std::endl;
        //use cerr if u want to display at the bottom
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
    }
#else
#define trace(...)
#endif
#define nn 2000005


string find(string str1, string str2) {
    int len1 = str1.length();
    int len2 = str2.length();
    int hash_str1[256] = {0};
    int hash_str2[256] = {0};
    for(int i=0;i<len2;i++)
    {
        hash_str2[str2[i]]++;
    }
    int start=0,start_index=-1,min_len=INT_MAX,count=0;

    for(int i=0;i<len1;i++) 
    {
        hash_str1[str1[i]]++;

        if(hash_str2[str1[i]]!=0 and hash_str1[str1[i]]<=hash_str2[str1[i]])
        {
            count++;
        }
        if(count == len2)
        {
            while(hash_str1[str1[start]]>hash_str2[str1[start]] or hash_str2[str1[start]]==0) 
            {
                if(hash_str1[str1[start]]>hash_str2[str1[start]]) 
                {
                    hash_str1[str1[start]]--;
                }
                start++;
            }

            int len_window = i-start+1;
            
            if(len_window<min_len) 
            {
                min_len=len_window;
                start_index = start;
            }
        }
    }

    if(start_index==-1) 
        return "No String";
    
    else 
        return str1.substr(start_index, min_len);
    
}

int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);

    cout<<find(str1,str2);

    return 0;
}