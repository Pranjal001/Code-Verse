#include <bits/stdc++.h>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int minidx=0,maxidx=0;
    int mini=101,maxi = 0;
    for(int i =0 ; i<n ; i++)
    {
        int val;
        cin>>val;
        if(mini>=val){ mini = val; minidx = i;}
        if(maxi<val){ maxi = val; maxidx = i;}
        
    }
    if(maxidx > minidx) maxidx--;
    cout<<maxidx + n-1-minidx;
    
    return 0;
}