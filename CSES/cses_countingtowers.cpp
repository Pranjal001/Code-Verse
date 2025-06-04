#include<bits/stdc++.h>

using namespace std;
const long long MOD = 1e9+7;
int main()
{
              
    int t;
    cin>>t;
    vector<vector<long long>> dp(1e6+1,vector<long long>(2,0));

    dp[1][0] = 1;
    dp[1][1] = 1;
    for(int i=2 ; i<1e6+1 ; i++)
    {
        dp[i][0] = (2*dp[i-1][0] + dp[i-1][1])%MOD;
        dp[i][1] = (4*dp[i-1][1] + dp[i-1][0])%MOD; 
    }
    while(t--)
    {
        int n;
        cin>>n;
        cout<<(dp[n][0]+dp[n][1])%MOD<<endl;
    }
    

    return 0;
}