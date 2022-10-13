#//  Radhey Radhey

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back

// HEllooooo
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++)
    {
        bool flag = false;
        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums1[i] == nums2[j])
                flag = true;
            if (flag && nums1[i] < nums2[j])
            {
                ans.pb(nums2[j]);
                flag = false;
                break;
            }
        }
        if (flag)
            ans.pb(-1);
    }
    return ans;
}

int32_t main()
{
    vector<int> numbers1{4, 1, 2};
    vector<int> numbers2{1, 3, 4, 2};
    vector<int> ans = nextGreaterElement(numbers1, numbers2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
