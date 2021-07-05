#include <bits/stdc++.h>
using namespace std;

vector<int> nums = {1, 0, -1, 0, 2, -2};
int target = 0;
void solve()
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> ans;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
                for (int l = k + 1; l < n; l++)
                    if (nums[i] + nums[j] + nums[k] + nums[l] == target)
                        cout << nums[i] << " " << nums[j] << " " << nums[k] << " " << nums[l] << endl;
}
