#include <bits/stdc++.h>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    
    long long n,k;
    cin>>n>>k;
    set<long long> st;
    multiset<long long> len;
    st.insert(0);
    st.insert(n);
    len.insert(n);
    for(long long i =0 ; i<k ; i++)
    {
        long long x;
        cin>>x;
        
        st.insert(x);
        // auto it = st.find(x);
        auto previ = --st.lower_bound(x);
        auto nexti = st.upper_bound(x);
        
        len.erase(len.find(abs(*nexti-*previ)));
        len.insert(abs(x-*previ));
        len.insert(abs(*nexti-x));
        cout<<*(len.rbegin())<<" ";
        
    }
    // cout<<ans.size();
 
    return 0;
}