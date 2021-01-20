#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ii pair<ll,ll>
#define dl endl
#define ft first
#define sc second
using namespace std;
const int N = 1.5e5 + 5;
int n, m, u, v;
ll x, Cc;
vector<int>a[N];
bool vis[N];
void Dfs(int i)
{
    vis[i] = 1; ++x;
    for (auto j : a[i])
    {
        if (!vis[j]) Dfs(j);
        ++Cc;
    }
}
int main()
{
    input;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) cin >> u >> v,a[u].push_back(v),a[v].push_back(u);
    for (int i = 1; i <= n; ++i)
    {
        if (!vis[i])
        {
            x = 0, Cc = 0;
            Dfs(i);
            ll c = x * (x - 1) / 2;
            Cc /= 2;
            if (Cc != c) return cout << "NO", 0;
        }
    }
    cout << "YES";
}
