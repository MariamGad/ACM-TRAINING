//https://codeforces.com/contest/714/problem/B

#include <iostream>
#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define dl endl
#define ft first
#define sc second
using namespace std;
int n, a;
set<int>st;
deque<int>dq;
int main()
{
	input;
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a,st.insert(a);
	if (st.size() == 1 || st.size() == 2) return cout << "YES", 0;
	if (st.size() == 3)
	{
		for (auto i : st) dq.push_back(i);
		int x = dq.front(); dq.pop_front();
		if ((dq.front() - x) == (dq.back() - dq.front())) cout << "YES";
		else cout << "NO";
	}
	else cout << "NO";
}
