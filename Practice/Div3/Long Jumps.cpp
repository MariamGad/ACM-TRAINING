//https://codeforces.com/contest/1472/problem/C

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
const int N = 2e5 + 5;
int t, n, a[N];
int main()
{
    input;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int, ll>mp;
        ll mx = INT_MIN;
        for (int i = 1; i <= n; ++i) cin >> a[i], mp[i] = i + a[i];
        for (int i = n; i >= 1; --i)
        {
            if (mp[i] <= n) a[i] += a[mp[i]];
            mx = max(mx, 1ll * a[i]);
        }
        cout << mx << dl;
    }
}