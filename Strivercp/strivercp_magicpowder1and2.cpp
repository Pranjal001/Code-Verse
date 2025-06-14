#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool check(ll count, ll k , vector<ll>& a ,vector<ll>& b)
{
    for(int i =0 ; i<a.size(); i++)
    {
        if(count*a[i]<b[i]) continue; //important line made sure the count*a[i] part doesnt get zero
        if(count*a[i]-b[i]>k) return false;
        else k-=count*a[i]-b[i];
    }
    return true;

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
    vector<ll> a(n,0),b(n,0);

    for(int i=0 ; i<n ; i++) cin>>a[i];
    for(int i=0 ; i<n ; i++) cin>>b[i];

    // logic : binary search
    ll low=0,high=0;

    //most important line in this code
    for(int i=0 ; i<n ; i++) high = max(high,(b[i]+k)/a[i]);
    
    while(low<=high)
    {
        ll mid = low + (high-low)/2;
        if(check(mid, k ,a ,b)){
            low = mid+1;
        }
        else high = mid-1;
    }

    cout<<high;

    
    
    
    return 0;
}