#include <bits/stdc++.h>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i =0 ; i<n ; i++){
        int val;
        cin>>val;
        ans |= val;
    }
    if(ans)
    cout<<"HARD";
    else cout<<"EASY"; 
    
    return 0;
}