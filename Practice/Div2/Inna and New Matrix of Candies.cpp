//https://codeforces.com/contest/400/problem/B

#include <iostream>
#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define dl endl
#define ft first
#define sc second
using namespace std;
int n, m,flag=1;
string s;
set<int>st;
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		int x, y;
		for (int j = 0; j < m; ++j)
		{
			if (s[j] == 'G') x = j;
			else if (s[j] == 'S') y = j;
		}
		if (y- x < 0) flag = 0;
		st.insert(y - x);
	}
	flag == 0 ? cout << -1 : cout << st.size();
}
