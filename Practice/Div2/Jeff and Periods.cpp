https://codeforces.com/contest/352/problem/B
/*
arithmetic progression formula 3,7,11,15,... the common diff equals to 4 
*/

#include <iostream>
#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ii pair<int,int>
#define dl endl
#define ft first
#define sc second
using namespace std;
int main()
{
	input;
	int n,a;
	map<int, vector<int>>mp;
	map<int, int>ans;
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> a, mp[a].push_back(i);
	for (auto& pair : mp)
	{
		if (pair.sc.size() == 1) ans[pair.ft] = 0;
		else
		{
			int c = pair.sc[1] - pair.sc[0],flag=1;
			for (int i = 0; i < pair.sc.size()-1; ++i)
				if (pair.sc[i + 1] - pair.sc[i] != c)
				{
					flag = 0; break;
				}
			if (flag) ans[pair.ft] = c;
		}
	}
	cout << ans.size()<<dl;
	for (auto& pair : ans) cout << pair.ft << " " << pair.sc<<dl;
}
