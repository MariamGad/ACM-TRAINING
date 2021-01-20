//https://codeforces.com/contest/129/problem/B 

#include <iostream>
#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(0);cin.tie(0)
#define ll long long
#define ull unsigned long long
#define dl endl
#define ft first
#define sc second
using namespace std;
int main()
{
    input;
 
    int n,m,a,b;
    cin>>n>>m;
    map<int,vector<int> >mp;
    for(int i=0;i<m;++i)
    {
        cin>>a>>b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    int g=0;
    while(true)
    {
        vector<int>v;
        for(auto& pair: mp)
        {
            int cnt=0;
            for(auto i=0;i<pair.sc.size();++i)
            {
                if(pair.sc[i]>0) cnt++;
            }
            if(cnt==1) v.push_back(pair.ft);
        }
        for(int i:v) mp.erase(i);
        for(int x:v)
        {
            for(auto &pair:mp)
            {
                for(auto i=0;i<pair.sc.size();++i)
                {
                    if(pair.sc[i]==x) pair.sc[i]=0;
                }
            }
        }
        if(v.size()) g++;
        else break;
    }
    cout<<g;
}
