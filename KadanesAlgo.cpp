// https://leetcode.com/problems/maximum-subarray/submissions/

#include <bits/stdc++.h>
using namespace std;

int bruteForce(vector<int> nums)
{
    int sum = 0, maxi = nums[0];
    if (nums.size() == 1)
        return nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += nums[k];
            }
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}

int Optimised(vector<int> nums)
{
    int sum = 0, maxi = INT_MIN;
    if (nums.size() == 1)
    {
        return nums[0];
    }
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}

int kadane(vector<int> nums)
{
    int sum = 0, maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        maxi = max(sum, maxi);
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}

int main()
{
    int size;
    cin >> size;
    vector<int> nums;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        nums.push_back(element);
    }
    int ans = Optimised(nums);
    cout << ans;
    return 0;
}