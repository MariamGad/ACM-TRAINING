//https://codeforces.com/problemset/problem/287/A

#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ii pair<int,int>
#define pll pair<ll,ll>
#define dl endl
#define ft first
#define sc second
using namespace std;
char grid[4][4];
int main()
{
	input;
	for (int i = 0; i < 4; ++i)
		for (int j = 0; j < 4; ++j) cin >> grid[i][j];
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			int dots = 0;
			if (grid[i][j] == '.')++dots;
			if (grid[i][j + 1] == '.')++dots;
			if (grid[i + 1][j] == '.')++dots;
			if (grid[i + 1][j + 1] == '.')++dots;
			if (dots == 1 || dots == 3 || dots == 4 || dots == 0) return cout << "YES", 0;
		}
	}
	cout << "NO";
}