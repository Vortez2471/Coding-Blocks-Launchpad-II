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

  /*
	    If m>n>0 are integers, then (m2-n2, 2mn, m2-n2) is a Pythagorean triple. This is easily seen with a bit of algebra. Thus, plugging in various (m,n) will give various triples.
		Now, our goal is to find a triple of the form (m2-n2, 2mn, m2-n2) in which our input value is one of the catheti. Note that the catheti are m2-n2 and 2mn. Also, note that the 
		second cathetus is always even. Thus, it makes sense to consider two cases:

		If a is even, then let's try to equate it with the second cathetus, 2mn, i.e., let's try to find an (m,n) pair such that 2mn = a. In this case, is even, so we can divide by 2. 
		We have mn = a/2. Thus, all we have to do is to find a factorization of a/2 into mn such that m>n. You can try various factoring methods — even naïve O(√a) time method will 
		pass - but in this case , we don't really even need to do that, since the trivial (m,n) = (a/2,1) works!. This gives us the solution triple ( (a^2)/4 - 1, a, (a^2)/4 + 1 ). 
		Note that (a^2)/4 is an integer since a is even.
		If a is odd, then we can't equate it with the second cathetus, so let's try instead m2-n2, i.e. we want to find an (m,n) such that m2-n2 = a. Node that m2-n2 = (m+n)(m-n), 
		so all boils down again to factoring! Let's try our trivial factorization again: (m+n, m-n) = (a,1) What we get is a system of two linear equations: m+n=a and m-n=1 which 
		has solution m=(a+1)/2 and n=(a-1)/2. Substituting back, this gives us the triple (a, (a^2 - 1)/2, (a^2 + 1)/2). Note that (a^2 + 1)/2 is an integer as a is odd.
  */


int main()
{
    ll num;

    while( cin >> num)
    {
        if(num < 3)
        	{ 
        		cout<<"-1"<<endl;  
        		continue; 
        	}

        if(num & 1)  
        {
        	cout<<(num*num-1)/2<<" "<<(num*num+1)/2<<endl;
        }
        else
        {
            cout<<((num*num)/4)-1<<" "<<((num*num)/4)+1<<endl;
        }
    }
    return 0;
}
