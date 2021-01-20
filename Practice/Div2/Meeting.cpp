// https://codeforces.com/contest/144/problem/B

#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ii pair<int,int>
#define dl endl
#define ft first
#define sc second
using namespace std;
int xa, ya, xb, yb, n, x, y, r,ans=0;
set<pair<double,double>>st;
vector < pair<pair<double,double>, int>>radiators;
int main()
{
    input;
    cin >> xa >> ya >> xb >> yb >> n;
    if (xa > xb) swap(xa, xb);
    if (ya > yb) swap(ya, yb);
    for (int i = xa, j = ya; i <= xb; ++i) st.insert({ i,j });
    for (int i = xa, j = yb; i <= xb; ++i) st.insert({ i,j });
    for (int i = ya, j = xa; i <= yb; ++i) st.insert({ j,i });
    for (int i = ya, j = xb; i <= yb; ++i) st.insert({ j,i });
    for (int i = 0; i < n; ++i) cin >> x >> y >> r, radiators.push_back({ {x,y},r });
    for (auto i : st)
    {
        bool flag = 1;
        for (auto j : radiators)
        {
            if (sqrt(abs(j.ft.ft - i.ft) * abs(j.ft.ft - i.ft) + abs(j.ft.sc - i.sc) * abs(j.ft.sc - i.sc)) <= (double)j.sc)
            {flag = 0; break;}
        }
        if (flag) ++ans;
    }
    cout << ans;
}
