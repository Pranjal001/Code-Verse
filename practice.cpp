#include<bits/stdc++.h>

using namespace std;


int main()
{
    // for I/O work
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Initialisation and input
    string recipe;
    long long nb,ns,nc;
    long long pb,ps,pc;
    long long r;
    
    cin>>recipe;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    // logic : basic math
    
    // count the string
    map<char,int> freq;
    for(auto it : recipe) freq[it]++;
    
    long long rb,rs,rc;
    long long mb,ms,mc;
    
    rb = nb%freq['B'];
    rs = ns%freq['S'];
    rc = nc%freq['C'];

    
    return 0;
}