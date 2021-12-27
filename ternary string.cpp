#include<bits/stdc++.h>
using namespace std;
#define fi() ios_base::sync_with_stdio;cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define test() int t; cin>>t; while(t--)

void solve()
{
    int ans=INT_MAX;
    string str;
    cin>>str;
    
    int ws=0,we=0;
    int count[4] = {0,0,0,0};
    
    for(;we<str.size();we++) // we pe slide kar rhe hai window end is dealt
    {
        int digit = str[we]-'0';
        
        count [digit]++; // count of every digit is here
        
      // if end and start same hai we ka not pusrope to take the last of the window window start ++;
      
        while(count[str[ws]-'0'] > 1)
        {
            count[str[ws]-'0']--;
            ws++;
        }
        if(count[1] && count[2] && count[3])
        ans = min(ans,we-ws+1);
    }
    cout<< (ans>str.size() ? 0 : ans)<<endl;
}
int main()
{
    fi()
    test()
    {
        solve();
    }
    return 0;
}
