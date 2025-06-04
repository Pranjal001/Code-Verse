#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<long long> arr(n,0),arrb(n,0);
        for(long long i=0 ; i<n ; i++) cin>>arr[i];
        for(long long i=0 ; i<n ; i++) cin>>arrb[i];

        long long i=0;
        long long maxelem = 0;
        long long ans =0,sum=0;
        for(int i =0 ; i<min(n,k) ; i++)
        {
            sum+= arr[i];
            maxelem = max(maxelem,arrb[i]);
            ans = max(ans ,sum+maxelem*1LL*(k-i-1));
        }
        cout<<ans<<endl;  
    }

    return 0;
}