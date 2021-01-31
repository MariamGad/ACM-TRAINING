//https://codeforces.com/problemset/problem/1204/A

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
string s;
ll n, f = 0;
int main()
{
	input;
	cin >> s;
	for (int i = 1; i < s.length(); ++i) if (s[i] == '1') { f = 1; break; }
	n = s.length() - 1;
	n % 2 == 0 && f == 0 ? cout << n / 2 : cout << n / 2 + 1;

}