//https://codeforces.com/contest/262/problem/B

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
	int n, k,a,cnt=0;
	vector<int>v;
	ll sum = 0;
	cin >> n>>k;
	for (int i = 0; i < n; ++i)
	{
		cin >> a, v.push_back(a);
		if (a < 0) cnt++;
	}
	if (cnt == 0 && k & 1) v[0]*= -1 ;
	else if (cnt)
	{
		for (int i = 0; i < n && k>0; ++i)
			if (v[i] < 0) v[i] *= -1, k--;
		sort(v.begin(), v.end());
		if (k & 1) v[0] *= -1;
	}
	for (int i = 0; i < v.size(); ++i) sum += v[i];
	cout << sum;
}
