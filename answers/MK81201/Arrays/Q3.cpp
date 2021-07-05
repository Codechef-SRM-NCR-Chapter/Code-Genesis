vector<int>nums={5,7,7,8,8,10};
   int target=8;

    void solve()
    {
        int n=nums.size();
        bool found=false;
        
        for(int i=0;i<n;i++)
        {
            if(nums==target && found==false)
            {
                cout<<i<<" ";
                found=true;
            }
            if(found==true && nums[i+1]!=target)
            {
                cout<<i<<return;
            }
        }
        cout<<-1<<" "<<-1;

	//To optimise search
        int lbb=lower_bound(nums.begin(),nums.end(),8)-nums.begin();
        int ubb=upper_bound(nums.begin(),nums.end(),8)-nums.begin();
        
        if(nums[lbb]==0)
            cout<<lbb<<ubb-1;
        else
            cout<<-1<<" "<<-1;
    }