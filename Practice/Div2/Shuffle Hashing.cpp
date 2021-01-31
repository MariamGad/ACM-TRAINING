https://codeforces.com/problemset/problem/1278/A

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
int t;
string p, h;
int main()
{
	input;
	cin >> t;
	while (t--)
	{
		cin >> p >> h;
		if (p.length() > h.length()) { cout << "NO" << dl; continue; }
		deque<char>dq;
		int cnt, f;
		dq.push_back(' ');
		for (int i = 0; i < p.length() - 1; ++i)dq.push_back(h[i]);
		for (int i = p.length() - 1; i < h.length(); ++i)
		{
			cnt = 0, f = 0;
			map<char, int>mp;
			dq.pop_front(), dq.push_back(h[i]);
			for (int j = 0; j < p.length(); ++j) ++mp[p[j]];
			for (auto i : dq)
				if (mp[i] > 0) --mp[i], ++cnt;
			if (cnt == p.length()) { cout << "YES" << dl; break; }
			else f = 1;
		}
		if (f == 1) cout << "NO" << dl;
	}

}