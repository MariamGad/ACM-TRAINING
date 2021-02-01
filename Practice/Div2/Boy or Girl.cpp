//https://codeforces.com/problemset/problem/236/A

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
set<char>st;
string s;
int main()
{
    input;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) st.insert(s[i]);
    st.size() % 2 == 0 ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
}