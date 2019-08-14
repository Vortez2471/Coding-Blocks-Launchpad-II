#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pii pair<ll,ll> 
#define N 200005
#define PI 3.141592653
map<int,int>m1;
void find_print(int arr[],int k,int n)
{
        int t=n;
        int m=0;
        while(m<n && k>0)
         {
            int i=m1[t-m];
            if(i==m) 
            { 
                m++;
                continue;
            } 
            else
            { 
                int temp=arr[m];
                arr[m]=arr[i];
                arr[i]=temp;
                m1[arr[i]]=i;
                m1[arr[m]]=m;
                m++;
                k--;
            }
        }
    for(int i=0;i<n;i++)
  	cout<<arr[i]<<" ";
}

int main()
{
   int n,k;
   cin>>n>>k;
   int arr[n];
   for(int i=0;i<n;i++)
   {
   	cin>>arr[i];
    m1[arr[i]]=i;
   }
   find_print(arr,k,n);

	return 0;
}