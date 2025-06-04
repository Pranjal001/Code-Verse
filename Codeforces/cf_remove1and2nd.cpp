#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        set<int> st;
        int ans =0;
        for(auto it : s)
        {
            st.insert(it);
            ans+=st.size();

        }
        cout<<ans<<endl;
    }
    return 0;
}