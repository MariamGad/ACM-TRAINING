//https://codeforces.com/contest/376/problem/B

#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ii pair<int,int>
#define dl endl
#define ft first
#define sc second
using namespace std;
int n, m, u, v, c;
vector<ii>a[105];
map<int, ll>mp;
ll ans = 0;
int main()
{
    input;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) cin >> u >> v >> c, a[v].push_back({ u,c });
    for (int i = 1; i <= n; ++i)
        for (auto j : a[i])
            mp[j.ft] += j.sc, mp[i] -= j.sc;

    for (int i = 1; i <= n; ++i) if (mp[i] > 0) ans += mp[i];
    cout << ans;
}
