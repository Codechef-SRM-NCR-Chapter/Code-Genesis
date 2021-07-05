vector<int>nums={2,7,11,15};
   int target=9;

    void solve()
    {
        int sum=0;
        for(int i=0;i<nums.size;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                sum=nums[i]+nums[j];
                
                if(sum==target)
                {
                    cout<<i<<" ";
                    cout<<j;
                    return;
                }
            }
        }
    }