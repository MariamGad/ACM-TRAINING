//https://codeforces.com/contest/271/problem/A

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
int main()
{
	input;
	cin >> s;
	int x = stoi(s);
	while (true)
	{
		++x;
		map<char, int>mp;
		s = to_string(x);
		bool f = 1;
		for (int i = 0; i < 4; ++i)
		{
			++mp[s[i]];
			if (mp[s[i]] > 1) f = 0;
		}
		if (f == 1) return cout << x, 0;
	}
}