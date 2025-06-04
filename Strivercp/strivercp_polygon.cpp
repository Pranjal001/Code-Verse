#include <bits/stdc++.h>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    map<string,int> mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;
    int ans =0;
    while(t--){
        string s;
        cin>>s;
        ans+=mp[s];
    }
    cout<<ans;
    
    return 0;
}