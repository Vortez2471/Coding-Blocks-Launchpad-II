#include <iostream>
#include <vector>
using namespace std;
#define MAX 10000000
vector<bool>a (MAX,true);
unsigned primearray[1000000];


void primes()
{
    a[0]=a[1]=false;

    for(unsigned i=2;i*i<=MAX;i++)
    {
        if(a[i])
        {
            for(unsigned j=i;j*i<=MAX;j++) 
              a[i*j]=false;
        }
    }
    unsigned idx = 1;
    primearray[0]=2;

    for(int i=3;i<=MAX;i+=2)
    {
        if(a[i])
        {
            primearray[idx++]=i;
        }     
    }
}

int main(int argc, char const *argv[])
{

    primes();

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        cout<<primearray[n-1]<<endl;
    }
    return 0;
}
