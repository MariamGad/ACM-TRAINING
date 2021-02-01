//https://codeforces.com/problemset/problem/706/A

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
double a, b, x, y, v, n, mn = 999999999999.9;
int main()
{
	input;
	cin >> a >> b >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> x >> y >> v;
		mn = min(sqrt(abs(x - a) * abs(x - a) + abs(y - b) * abs(y - b)) / v, mn);
	}
	cout << setprecision(8) << fixed << mn;
}