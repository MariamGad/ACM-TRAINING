//https://codeforces.com/contest/230/problem/A

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
ll s, n;
ii arr[1005];
int main()
{
	input;
	cin >> s >> n;
	for (int i = 0; i < n; ++i) cin >> arr[i].ft >> arr[i].sc;
	sort(arr, arr + n);
	for (int i = 0; i < n; ++i)
	{
		if (s <= arr[i].ft) return cout << "NO", 0;
		s += arr[i].sc;
	}
	cout << "YES";
}