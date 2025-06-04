#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> nums(n,0);
        for(int i=0 ; i<n ; i++)  cin>>nums[i];
        
        int parity = -1;
        int j=0 , sum = 0 , ans= 0;
        for(int i=0 ; i<n ; i++){
            if(parity == -1)
            {                                                                                                                                               
                parity = abs(nums[i])%2;
                sum = nums[i];   
            }
            else if(abs(nums[i])%2 != parity){
                if(sum<0) sum = 0;
                sum+= nums[i];
                parity = !parity;                
            }
            else{
                parity = abs(nums[i])%2;
                sum = nums[i];
            }
            ans = max(ans,sum);
        }

        if(ans == 0) ans =  *max_element(nums.begin() , nums.end());
        cout<<ans<<endl;
    }

    

    return 0;
}