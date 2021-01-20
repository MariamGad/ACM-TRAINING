//https://codeforces.com/contest/385/problem/B

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
int main()
{
	input;
	string s;
	int sum = 0, pos;
	cin >> s;
	for (int i = 0; i < s.length(); ++i)
	{
		pos = s.find("bear", i);
		//cout << pos << " ";
		if(pos>=0)sum += s.length() - pos - 3;
		//cout << sum << dl;
	}
	cout << sum;
}
 
/*
bearaabearc
bear
beara
bearaa
bearaab
bearaabe
bearaabea
bearaabear
bearaabearc --> 8
 
bear
bearc -->10 
 
abearc
aabearc
raabearc
araabearc
earaabearc -->15
 
abear
aabear
raabear
araabear
earaabear -->20
*/
