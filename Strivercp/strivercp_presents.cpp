#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> arr(n+1,0);

    for(int i=1 ; i<=n ; i++)
    {
        int x;
        cin>>x;
        arr[x]=i;
    }
    for(int i=1 ; i<=n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}