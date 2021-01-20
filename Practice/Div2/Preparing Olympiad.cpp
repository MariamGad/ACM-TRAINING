#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ii pair<ll,ll>
#define dl endl
#define ft first
#define sc second
using namespace std;
int n, l, r, x,a[20],cnt=0;
int main()
{
    input;
    cin >> n >> l >> r >> x;
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < (1 << n); ++i)
    {
        int sum = 0, mx = INT_MIN, mn = INT_MAX;
 
        for (int j = 0; j < n; ++j)
            if (i & (1 << j)) sum += a[j], mx = max(mx, a[j]), mn = min(mn, a[j]);
 
        if (sum >= l && sum <= r && mx - mn >= x)++cnt;
    }
    cout << cnt;
}
