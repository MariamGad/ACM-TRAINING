// uva 374
#include <iostream>
#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ii pair<int,int>
#define dl endl
#define ft first
#define sc second
using namespace std;
ll power(ll b, ll po, ll mod)
{
    ll ret = 1;
    while (po > 0)
    {
        if (po & 1) ret = (ret * b) % mod;
        b = (b * b) % mod;
        po >>= 1;
    }
    return ret;
}
int main()
{
    input;
    ll b, p, m;
    while (cin >> b >> p >> m)
    {
        cout << power(b % m, p, m) << dl;
    }
}
