#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool tsum(ll k)
{
    ll sum=0;
    if((k+1) & 1){
        sum = ((k)/2) * (k+1);
    }
    else sum = ((k)/2) * (k+1);
}

int main()
{
    // for I/O work
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Initialisation and input
    ll n,k;
    cin>>n>>k;
    
    n--;
    ll ksum = tsum(k-1);

    if(ksum < n){ cout<<-1; return 0;}

    ll low=0,high=k-1;

    while(low<=high)
    {
        ll mid = low + (high-low)/2;
        
        if(ksum - tsum(mid) >= n){
            low = mid+1;
        }
        else high = mid-1;
    }
    
    cout<<k-1-high;
    return 0;
}