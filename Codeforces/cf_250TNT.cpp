#include <bits/stdc++.h>
#include <stdio.h>
 
using namespace std;

long long func(vector<long long> &arr, int k)
{
    long long sum,mini,maxi;
    for(int i=0 ; i<arr.size() ; i++)
    {

    }
} 
int main()
{
    
    int t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> arr;
        long long mini=1e9+1,maxi=-1;
        for(int i=0 ; i<n ; i++)
        {
            long long x;
            cin>>x;
            mini = min(mini,x);
            maxi = max(maxi,x);
            arr.push_back(x);
        }
        
        if(n%2 == 1){
            cout<<maxi-mini<<endl;
            continue;
        }

        long long l=0,r=n;
        long long ans = -1;
        while(l<r){
            long long mid = (r-l)/2 + l;
            if(ans<= func(arr,mid)){
                ans = mid;
                r = mid-1;

            } 
            else{
                l = mid+1;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}