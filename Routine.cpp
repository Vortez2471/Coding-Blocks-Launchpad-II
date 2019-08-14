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

vector<string>vec;

int main()
{
	int j=0,k=1;

	vec={"Binary Search and Sorting",
	"Greedy and Linked Lists",
	"Stacks and Hashing",
	"Heap and Backtracking",
	"Tree","Trie and Recursion",
	"Dynamic Programming",
	"Dynamic Programming",
	"Dynamic Programming and Graph"};

    for(int i=28;i<=36;i++)
    {
    	if(i<=31)
    	{
    		cout<<i<<" -> "<<vec[j]<<endl;
    	}
    	else
    	{
    		cout<<0<<k<<" -> "<<vec[j]<<endl;
    		k++;
    	}
    	j++;
    }	
    cout<<"\nPaise bachane h bahar se kuch nhi khana\nData Structures and Algorithms faad dena h\nData Science and Machine Learning ko bhi krna h\nThird year mein h ab tu no running aways\n"<<endl;

    cout<<"FOR WEEKDAYS\n4:00 -> Wake Up!\n5:00-8:00 -> Learn new Algorithms\n8:00-9:00 -> Get Ready and have Breakfast\n9:00-3:00 -> Go college daily\n3:30-5:00 -> Lunch and Chill\n5:00-6:00 -> Python\n6:00-7:00 -> Snacks and Chill\n7:00-8:30 -> Coding\n8:30-9:30 -> Dinner and Milk\n10:00 -> Sleep!\n"<<endl;

    cout<<"FOR WEEKENDS\n5:00 -> Wake Up!\n6:00-9:00 -> Learn new Algorithms\n9:00-10:00 -> Get Ready and have Breakfast\n10:00-1:30 -> Coding\n1:30-3:00 -> Lunch and Chill\n3:00-6:00 -> Python\n6:00-7:00 -> Snacks and Chill\n7:00-8:30 -> Chill\n8:30-9:30 -> Dinner and Milk\n10:00 -> Sleep!\n"<<endl;    
}