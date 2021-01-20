//https://codeforces.com/contest/66/problem/B

#include <iostream>
#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(0);cin.tie(0)
#define ll long long
#define ull unsigned long long
#define dl endl
#define ft first
#define sc second
using namespace std;
int n,a[1005],mx=INT_MIN;
int main()
{
  cin>>n;
  for(int i=1;i<=n;++i) cin>>a[i];
  for(int i=1;i<=n;++i)
  {
    int st=i-1,en=i+1,cnt=0;
    if(a[i]>=a[st] &&a[st]>0) cnt++;
    if(a[i]>=a[en] &&a[en]>0) cnt++;
    if(cnt>0)
    {
        while(en<=n)
        {
            if(a[en]>=a[en+1] && a[en+1]>0)
            {
            cnt++;
            en++;
            }
            else break;
        }
        while(st>0)
        {
            if(a[st]>=a[st-1] &&a[st-1]>0)
            {
                cnt++;
                st--;
            }
            else break;
        }
    }
    cnt++;
    mx=max(cnt,mx);
  }
  cout<<mx;
}
