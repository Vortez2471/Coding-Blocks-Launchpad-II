#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<unordered_map>
#include<unordered_set>
#define ll long long
#define MAX 100000003
using namespace std;

int main()
{
	    int n;
	    cin>>n;
        int nsp=2*n-3;     
        int nst=1;        

        for(int i=1;i<=n;i++)
        {
            int num=1;
            
            for(int cst=1;cst<=nst;cst++)
            {
                if(cst!=n)
                  cout<<num<<"\t";
                num++;
            }

            for(int csp=1;csp<=nsp;csp++)
            {
                cout<<" \t";
            }

            for(int cst=num-1;cst>=1;cst--)
            {
                cout<<cst<<"\t";
            }

            nsp=nsp-2;
            nst++;
            
            cout<<endl;
        }

        return 0;
}