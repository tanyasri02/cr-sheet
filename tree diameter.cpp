#include<bits/stdc++.h>

using namespace std;
const int mx=2e5+1;

int n,a,b,last,dis[mx];
vector<int>tree[mx];

void dfs(int u,int pre=0)
{
    for(int v:tree[u])
    {
        if(v!=pre)
        {
            dis[v]=dis[u]+1;
            dfs(v,u);
        }
    }
}
int main()
{
    cin>>n;
    
    for(int i=0;i<n-1;i++)
    {
        cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    
    dfs(1);
    
    last=0;
    for(int i=1;i<=n;i++)
    {
        if(dis[i]>dis[last])
        last=i;
    }
    
    dis[last]=0;
    dfs(last);
    
    for(int i=1;i<=n;i++)
    {
        if(dis[i]>dis[last])
        last=i;
    }
    cout<<dis[last];
    return 0;
}
