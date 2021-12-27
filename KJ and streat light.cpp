#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

// Driver Function
int main()
{
    //ll compte = 1;
    //test()
    //{
        ll n,p;
        cin>>n>>p;
        ll arr[500000]={0};

        for(ll i=0;i<n;i++)
        {
            ll x,r;
            cin>>x>>r;
            ll left = x-r;
            ll right = x+r;
            if(left<0)
                left=0;
            arr[left]+=1;
            arr[right+1]-=1;    
        }
        ll sum[500000]={0};
        ll sm=0;
        for(ll i=0;i<=p;i++)
        {
            sm+=arr[i];
            sum[i]=sm;
        }

        ll cnt = 0;
        ll mx = INT_MIN;
        for(ll i=0;i<=p;i++)
        {
            if(sum[i]!=1)
            {
                cnt+=1;
            }
            else
            {
                cnt=0;
            }
            mx= max(cnt,mx);
        }
        cout<<mx<<"\n";
    //}
    return 0;
}
