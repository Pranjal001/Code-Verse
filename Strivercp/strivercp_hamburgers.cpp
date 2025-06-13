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
    // logic : binary search
    // count the string
    map<char,int> freq;
    for(int it=0; it<recipe.size(); it++){  freq[recipe[it]]++;}
    
    long long low=0,high=r+500;

    while(low<=high)
    {
        long long mid = low+((high-low)/2);
        
        long long rb = max(freq['B']*mid - nb , 0ll);
        long long rs = max(freq['S']*mid - ns , 0ll);
        long long rc = max(freq['C']*mid - nc , 0ll); 

        long long extra_price = rb*pb+rs*ps+rc*pc;

        if(extra_price <= r){
            low  = mid+1;
        }
        else high = mid-1;


    }
    cout<<high;

    
    return 0;
}