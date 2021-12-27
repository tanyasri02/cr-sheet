#include<bits/stdc++.h>
using namespace std;
#define fi() ios_base::sync_with_stdio;cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define test() int t; cin>>t; while(t--)
const int N = 10000001;

int main()
{
    fi()
    vector<int>v(N,1);
        v[0]=0;
        v[1]=0;
        
        for(int i=2;i*i<=N;i++)
        {
            if(v[i] == 1)
            for(int k=2*i ;k<N ;k+=i)
            {
                v[k]=0;
            }
        }
        
        for(int i=2;i<=N;i++)
        {
            v[i] += v[i-1];
        }
    test()
    {
        int l , r;
        cin>>l>>r;
        cout<<v[r]-v[l-1]<<endl;
    }
    return 0;
}
