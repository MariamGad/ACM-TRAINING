//https://codeforces.com/contest/253/problem/B

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
int n, a[N], mn = INT_MAX;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	input;
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i], a[i] *= 2;
	sort(a, a + n);
	for (int i = n - 1; i >= 0; --i)
	{
		int upp = lower_bound(a, a + n, a[i]/2) - a;
		mn =min( mn,(upp + n - (i + 1)));
	}
	cout << mn;
}
