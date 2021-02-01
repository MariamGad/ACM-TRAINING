//https://codeforces.com/problemset/problem/469/B

#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ii pair<int,int>
#define dl endl
#define ft first
#define sc second
using namespace std;
int p, q, l, r;
ii z[55], x[55];
set <int>st;
int main()
{
    input;
    cin >> p >> q >> l >> r;
    for (int i = 0; i < p; ++i) cin >> z[i].ft >> z[i].sc;
    for (int i = 0; i < q; ++i) cin >> x[i].ft >> x[i].sc;

    for (int i = l; i <= r; ++i)
        for (int j = 0; j < q; ++j)
            for (int k = 0; k < p; ++k)
            {
                if (x[j].ft + i > z[k].sc || x[j].sc + i < z[k].ft) continue;
                else st.insert(i);
            }
    cout << st.size();
}