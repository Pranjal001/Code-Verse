#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
   while(t--)
   {
        long long n;
        cin>>n;
        vector<long long> nums(n,0);
        // set<long long> st; 
        for(long long i=0 ; i<n ; i++)
        {
            cin>>nums[i];
            // st.insert(nums[i]);
        }
        vector<long long> ans = nums;
        sort(nums.begin(),nums.end());
        vector<long long> pref(n,0);
        map<long long,long long> mp;
        
        pref[0] = nums[0];
        mp[nums[n-1]] = n-1; 
        for(int i=1 ; i<n ; i++)
        {
            pref[i] = pref[i-1]+nums[i]; 
        }
        for(int i = n-2;  i>=1 ; i--)
        {
            if(pref[i] >= nums[i+1]){
                mp[nums[i]] = mp[nums[i+1]];
            }
            else{
                long long it = upper_bound(nums.begin() , nums.end() , pref[i]) - nums.begin() -1;
                mp[nums[i]] = it;
            }
            
        }


        for(auto it : ans){
            cout<<mp[it]<<" ";
        }

        cout<<endl;
        

   }

    return 0;
}