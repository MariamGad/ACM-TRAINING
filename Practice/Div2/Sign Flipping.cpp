//https://codeforces.com/problemset/problem/1375/A

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
int t, n, a[105];
int main()
{
    input;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (i & 1) a[i] = abs(a[i]);
            else a[i] = -1 * abs(a[i]);
        }
        for (int i = 0; i < n; ++i) cout << a[i] << " ";
        cout << dl;
    }
}