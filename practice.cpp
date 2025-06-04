#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long n;
    cin>>n;
    int ans=0;
    int curr=0;
    for(int i=0 ; i<n ; i++)
    {
        int a,b;
        cin>>a>>b;
        curr = curr - a + b;
        ans = max(curr,ans);
    }
    cout<<ans;

    return 0;
}