vector<vector<int>> triangle={{2},{3,4},{6,5,7},{4,1,8,3}};

    void solve()
    {
        int n=triangle.size();
        int ans=0;
        
        for(int i=0;i<n-1;i++)
        {
            int minimum=INT_MAX;
            for(int j=0;j<triangle[i].size();j++)
            {
                minimum=min(triangle[i][j],minimum);
            }
            ans+=minimum;
            cout<<ans<<endl;
        }
        
    }