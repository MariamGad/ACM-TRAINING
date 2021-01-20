//https://codeforces.com/contest/433/problem/B

#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ii pair<int,int>
#define dl endl
#define ft first
#define sc second
using namespace std;
const int N = 1e5 + 5;
int n, m, type, l, r;
ll a[N], b[N];
int main()
{
	input;
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> a[i], b[i] = a[i];
	sort(b, b + n+1);
	for (int i = 2; i <= n; ++i) b[i] += b[i - 1];
	for (int i = 2; i <= n; ++i) a[i] += a[i - 1];
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		cin >> type >> l >> r;
		type == 1 ? cout << a[r] - a[l - 1] << dl : cout << b[r] - b[l - 1] << dl;
	}
}
