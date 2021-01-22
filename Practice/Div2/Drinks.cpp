https://codeforces.com/problemset/problem/200/B

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
double n, a[105], sum;
int main()
{
	input;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if (a[i] > 0) sum += a[i] / 100;
	}
	cout << setprecision(6) << fixed << sum / n * 100;
}
