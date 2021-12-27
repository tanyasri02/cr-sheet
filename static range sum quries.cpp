#include<bits/stdc++.h>
using namespace std;
#define fi() ios_base::sync_with_stdio;cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define test() int t; cin>>t; while(t--)

void solve()
{
    int n,q;
    cin>>n>>q;
    
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    //cout<<q<<endl;
    int prefix[n+1];
    prefix[1] = arr[1];
    
    for(int i=2;i<=n;i++)
    {
        prefix[i] = prefix[i-1]+arr[i];
        //cout<<prefix[i]<<" ";
    }
    
    while(q--)
    {
        int l,r,ans=0;
        cin>>l>>r;
       // cout<<l<<" "<<r<<endl;
        if(l == 1)
        ans = prefix[r];
        else
        ans = prefix[r]-prefix[l-1];
        cout<<ans<<endl;
    }
}
int main()
{
    fi()
    //test()
    //{
        
        solve();
    //}
    return 0;
}
