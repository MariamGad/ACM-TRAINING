//https://codeforces.com/problemset/problem/1311/C

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
int t, n, m, a[N];
ll com[N];
string s = "abcdefghijklmnopqrstuvwxyz", str;
int main()
{
    input;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> str;
        map<int, ll>mp;
        map<char, ll>mp2;
        for (int i = 0; i < str.length(); ++i) ++mp2[str[i]];
        for (int i = 0; i < m; ++i) cin >> a[i], ++mp[1], --mp[a[i] + 1];
        for (int i = 1; i <= str.length(); ++i) com[i] = mp[i] + com[i - 1];
        for (int i = 0; i < str.length(); ++i) mp2[str[i]] += com[i + 1];
        for (int i = 0; i < 26; ++i) cout << mp2[s[i]] << " ";
        cout << dl;
        memset(com, 0, str.length());
    }
}