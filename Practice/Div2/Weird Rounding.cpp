//https://codeforces.com/problemset/problem/779/B

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
string s;
int k, cnt, n;
ll t = 1, x;
int main()
{
    input;
    cin >> s >> k;
    if (s == "0") return cout << 0, 0;
    while (k)t *= 10, --k;
    ll x = stoll(s);
    n = s.length();
    if (t > x) return cout << s.length() - 1, 0;
    int y = s.length() - 1;
    while (x % t != 0)
    {
        while (s[y] == '0')--y;
        s.erase(y, 1), --y, ++cnt;
        x = stoll(s);
    }
    x == 0 ? cout << n - 1 : cout << cnt;
}