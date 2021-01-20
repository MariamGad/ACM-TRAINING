#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ii pair<ll,ll>
#define dl endl
#define ft first
#define sc second
using namespace std;
int n, k;
int main()
{
    input;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (n * n / 2 < k) return cout << "NO", 0;
    }
    else
        if (n * n / 2 + 1 < k) return cout << "NO", 0;
    cout << "YES \n";
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if ((i + j) % 2 == 0 && k > 0) cout << "L", --k;
            else cout << "S";
        }
        cout << dl;   
    }
}
