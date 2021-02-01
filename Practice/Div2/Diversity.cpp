//https://codeforces.com/problemset/problem/844/A

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
int n;
string s;
set<char>st;
int main()
{
	input;
	cin >> s >> n;
	if (n > s.length()) return cout << "impossible", 0;
	for (int i = 0; i < s.length(); ++i) st.insert(s[i]);
	st.size() >= n ? cout << 0 : cout << n - st.size();
}