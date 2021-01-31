//https://codeforces.com/problemset/problem/41/A

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
string s, s2;
int main()
{
	input;
	cin >> s >> s2;
	reverse(s.begin(), s.end());
	s == s2 ? cout << "YES" : cout << "NO";
}