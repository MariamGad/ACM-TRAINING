https://codeforces.com/problemset/problem/492/B

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
int n, lg;
double x, mid, l = 0, h, mx;
vector<double>v;
map<double, int>mp;
bool ok(double x)
{
	for (int i = 0; i < n - 1; ++i)
	{
		if (v[i + 1] - v[i] - x > x) return false;
	}
	return true;
}
int main()
{
	input;
	cin >> n >> lg;
	for (int i = 0; i < n; ++i)
	{
		cin >> x, ++mp[x];
		if (mp[x] == 1) v.push_back(x);
	}
	sort(v.begin(), v.end());
	h = lg;
	n = v.size();
	while ((h - l) > 0.0000000001)
	{
		mid = (l + h) / 2;
		if (ok(mid)) h = mid;
		else l = mid;
	}
	mx = max(v[0] - 0, (double)lg - v[n - 1]);
	mx > h ? cout << setprecision(6) << fixed << mx : cout << setprecision(6) << fixed << h;
}
