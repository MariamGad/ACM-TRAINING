//https://codeforces.com/contest/6/problem/B

#include <iostream>
#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define dl endl
#define ft first
#define sc second
using namespace std;
int n, m;
char c, a[105][105];
map<char,int> mp;
bool vis[105][105];
bool valid(int r, int c)
{
	return r >= 0 && r < n&& c >= 0 && c < m;
}
void cnt(int r, int co)
{
	if (!valid(r, co) ||vis[r][co]) return;
	if (a[r][co] != '.' && a[r][co] != c) mp[a[r][co]]++;
	vis[r][co] = 1;
	if (a[r][co] == c)
	{
		cnt(r, co + 1);
		cnt(r, co - 1);
		cnt(r + 1, co);
		cnt(r - 1, co);
	}
}
int main()
{
	input;
	cin >> n >> m >> c;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) cin >> a[i][j];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if (a[i][j] == c) cnt(i, j);
	cout << mp.size();
}
