#include <bits/stdc++.h>
using namespace std;

vector<int> arr = {3, 2, 4, 1};

void solve()
{

    vector<int> a = arr;
    sort(arr.begin(), arr.end());
    int i = arr.size();

    vector<int> ans;
    while (--i)
    {
        int it = find(a.begin(), a.end(), arr[i]) - a.begin() + 1;
        if (it == i + 1)
            continue;
        ans.push_back(it);
        ans.push_back(i + 1);

        reverse(a.begin(), a.begin() + it);
        reverse(a.begin(), a.begin() + i + 1);

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
}