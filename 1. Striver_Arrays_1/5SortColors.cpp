// https://leetcode.com/problems/sort-colors/

#include <bits/stdc++.h>
using namespace std;

vector<int> MyApproach(vector<int> nums)
{
    int zeros = 0, ones = 0, twos = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            zeros++;
        else if (nums[i] == 1)
            ones++;
        else
            twos++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (zeros != 0)
        {
            nums[i] = 0;
            zeros--;
        }
        else if (ones != 0)
        {
            nums[i] = 1;
            ones--;
        }
        else
        {
            nums[i] = 2;
            twos--;
        }
    }
    return nums;
}

// Using Dutch National Flag Algorithm

//  1 0 2 0 1 2 0 1 2

// 0 - low-1 -> 0       left of low => 0
// low - mid-1 -> 1     left of mid to low => 1
// high+1 - n -> 2      right of hihgh => 2
vector<int> Optimised(vector<int> nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
    return nums;
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
    vector<int> ans = Optimised(nums);
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}