//https://codeforces.com/contest/978/problem/C
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
int n, m, mid;
pll a[N];
ll b[N], x;

void bS(int l, int h, ll x)
{
    if (l > h) return;
    mid = (l + h + 1) / 2;
    if (x <= a[mid].sc && x >= a[mid].ft)
    {
        cout << mid << " " << x - a[mid].ft + 1 << dl;
        return;
    }
    else if ((mid <= n && a[mid].sc > x) || mid > n)bS(l, mid - 1, x);
    else if ((mid <= n && a[mid].ft < x) || mid < 1) bS(mid + 1, h, x);
}

int main()
{
    input;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        if (i == 1) a[i].first = 1, a[i].sc = x;
        else a[i].ft = a[i - 1].sc + 1, a[i].sc = a[i - 1].sc + x;
    }
    for (int i = 1; i <= m; ++i) cin >> b[i], bS(1, 2e5, b[i]);
}