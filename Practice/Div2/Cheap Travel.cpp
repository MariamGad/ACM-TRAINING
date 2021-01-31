//https://codeforces.com/problemset/problem/466/A

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
int n, m, a, b, cost;
int main()
{
	input;
	cin >> n >> m >> a >> b;
	for (int i = 0; i < 1000; ++i)
	{
		if (n - m >= 0) cost += min(b, a * m), n -= m;
		else break;
	}
	cost += min(a * n, b);
	cout << cost;
}