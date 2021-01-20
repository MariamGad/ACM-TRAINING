//http://codeforces.com/contest/546/problem/B

#include <iostream>
#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ii pair<int,int>
#define dl endl
#define ft first
#define sc second
using namespace std;
int main()
{
	input;
	int n,a,ans=0;
	map<int, int>mp;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a,mp[a]++;
		while (mp[a] > 1) ans++,a++,mp[a]++;
	}
	cout << ans;
}
