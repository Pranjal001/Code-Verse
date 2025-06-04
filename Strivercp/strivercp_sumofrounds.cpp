#include <bits/stdc++.h>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans;
        int cnt=0;
        int tens = 1;
        while(n)
        {
            if(n%10)
            {cnt++;
            ans.push_back((n%10)*tens);}
            tens *= 10;
            n /=10;
            
        }
        cout<<cnt<<endl;
        for(auto it : ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }   
    return 0;
}