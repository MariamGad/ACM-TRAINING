//https://codeforces.com/problemset/problem/705/A

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
string s = "I hate that I love that ", str;
int n;
int main()
{
	input;
	cin >> n;
	while (n > 2)
		str += s, n -= 2;
	n == 2 ? str += "I hate that I love it" : str += "I hate it";
	cout << str;
}