#include<bits/stdc++.h>

using namespace std;


int hcf(int a,int b)
{
    return b==0 ? a : hcf(b,a%b);
}
int main()
{
    // for I/O work
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Initialisation and input
    cout<<hcf(7,8);

    
    return 0;
}