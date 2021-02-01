//https://codeforces.com/problemset/problem/1363/A

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
const int N = 1e3 + 5;
int t, n, x, a[N];
int main()
{
	input;
	cin >> t;
	while (t--)
	{
		cin >> n >> x;
		int odd = 0, even = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			if (a[i] & 1)++odd;
		}
		even = n - odd;
		if (odd % 2 == 0 && odd > 1)--odd;
		if (even >= x - odd && odd && x & 1) cout << "YES" << dl;//odd 
		else if (x % 2 == 0 && odd && even && even >= x - odd) cout << "YES" << dl;//even
		else cout << "NO" << dl;
	}
}