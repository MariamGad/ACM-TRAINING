//https://codeforces.com/problemset/problem/998/A

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
ii a[15];
int main()
{
    input;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i].ft, a[i].sc = i + 1;
    if (n == 1 || (n == 2 && a[0].ft == a[1].ft)) return cout << -1, 0;
    cout << n - 1 << dl;
    sort(a, a + n);
    for (int i = 1; i < n; ++i) cout << a[i].sc << " ";

}