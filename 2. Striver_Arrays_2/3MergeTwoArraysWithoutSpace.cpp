#include <bits/stdc++.h>
using namespace std;

vector<int> Merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int point = 0;
    for (int i = 0; i < m + n; i++)
    {
        if (nums1[i] == 0)
        {
            swap(nums1[i], nums2[point]);
            point++;
        }
        if (nums1[i] > nums2[point])
        {
            swap(nums1[i], nums2[point]);
        }
    }
    return nums1;
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> nums1;
    vector<int> nums2;
    for (int i = 0; i < m + n; i++)
    {
        int element;
        cin >> element;
        nums1.push_back(element);
    }
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        nums2.push_back(element);
    }
    vector<int> ans = Merge(nums1, n, nums2, m);
    for (auto i : nums1)
    {
        cout << i;
    }
    return 0;
}