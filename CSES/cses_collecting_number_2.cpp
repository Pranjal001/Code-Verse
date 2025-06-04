#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> arr(n+1,0),idx(n+1,0);
    for(int i=1 ; i<=n ; i++)
    {
        int x;
        cin>>x;
        arr[x]=i;
        idx[i]=x;    
    }
    
    int ans=1;
    for(int k=1; k<n ; k++)    
        if(arr[k]>arr[k+1]) ans++;

    for(int i=0 ; i<m ; i++)
    {
        int a,b;
        cin>>a>>b;
        
        cout<<idx[a]<<" "<<idx[b]<<"\n";
        if(idx[a]<idx[b]){  ans++;}
        else ans--;
        //swap and positions a and b
        // swap(arr[idx[a]],arr[idx[b]]);
        swap(idx[a],idx[b]);
        // cout<<idx[a]<<" "<<idx[b]<<"\n";
        //find number of rounds

        cout<<ans<<"\n";
        
    }
    

    return 0;
}