#include<bits/stdc++.h>

using namespace std;


int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    long long n,k;
    cin>>n>>k;
    // cout<<"ok";
    while(k)
    {
        // cout<<n<<"-> ";
        if(n%10 != 0){
            if(k> n%10){ int temp = n%10; n-= temp; k-= temp; }
            else  {n-=k; k=0;}
        }
        else{
            k--;
            n /= 10;
        }
    }
    cout<<n;
    

    return 0;
}