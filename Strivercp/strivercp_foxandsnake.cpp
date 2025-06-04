#include <bits/stdc++.h>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;

    string body = "#";
    string leftbody = "#";
    string rightbody = "";
    for(int i=0 ; i<m-1; i++)
    {
        body.push_back('#');
        leftbody.push_back('.');
        rightbody.push_back('.');
    }
    rightbody.push_back('#');

    bool flag=false;

    for(int i=0 ; i<n ; i++)
    {
        if(i&1){
            if(flag) cout<<leftbody<<endl;
            else cout<<rightbody<<endl;
            flag = !flag;
        }
        else cout<<body<<endl;
    }

    
    return 0;
}