//https://codeforces.com/contest/339/problem/B
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
const int N = 1e5 + 5;
int n, m, a[N];
ll sum = 0;
int main()
{
    input;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) cin >> a[i];
    sum += a[0] - 1;
    for (int i = 0; i < m - 1; ++i)
    {
        if (a[i + 1] >= a[i]) sum += a[i + 1] - a[i];
        else
        {
            int x = n - a[i];
            ++x; sum += x;
            sum += a[i + 1] - 1;
        }
    }
    cout << sum;
}
