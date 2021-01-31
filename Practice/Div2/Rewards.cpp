//https://codeforces.com/problemset/problem/448/A

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
int n, x, c, m;
int main()
{
	input;
	for (int i = 0; i < 3; ++i) cin >> x, c += x;
	c % 5 != 0 ? c = c / 5 + 1 : c = c / 5;
	for (int i = 0; i < 3; ++i) cin >> x, m += x;
	m % 10 != 0 ? m = m / 10 + 1 : m = m / 10;
	cin >> n;
	n >= c + m ? cout << "YES" : cout << "NO";
}
