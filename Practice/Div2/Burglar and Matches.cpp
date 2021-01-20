//https://codeforces.com/contest/16/problem/B

#include <iostream>
#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(0);cin.tie(0)
#define ll long long
#define ull unsigned long long
//swap the ft with the sec of the pair to sort them in descending order to find where is the biggest
//no of matches then check if the no of its container smaller than n or not
using namespace std;
int main()
{
    input;
    int n,m,sum=0;
    cin>>n>>m;
    pair<int,int>arr[m];
    for(int i=0;i<m;++i) cin>>arr[i].second>>arr[i].first;
    sort(arr,arr+m);
    for(int i=m-1;i>=0;--i)
    {
      if(arr[i].second<=n)
      {
          sum+=(arr[i].first)*arr[i].second;
          n-=arr[i].second;
      }
      else
      {
          sum+=arr[i].first*n;
          break;
      }
    }
    cout<<sum;
}
