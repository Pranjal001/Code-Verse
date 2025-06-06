#include<bits/stdc++.h>

using namespace std;


int main()
{
    // for I/O work
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    // Initialisation and input
    long long n,k,w;
    cin>>k>>n>>w;
    // logic : basic problem with the idea of using
    //         sum of n natural nos
    long long ttl_nana = 0;
    if(w%2==1) ttl_nana = ((w+1)/2)*w;
    else ttl_nana = (w/2)*(w+1);
    
    if(n >= ttl_nana*k) cout<<0;
    else cout<<ttl_nana*k - n; 

    return 0;
}