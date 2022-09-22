// ------------ Tortoise Approach--------------- //
// Linked list cyclic method
// TC : O(N) SC : O(1)

#include <bits/stdc++.h>
using namespace std;

// Brute Force : TC : O(N^2)
// 2 Loops one for element and 1 for searching
int BruteForce(vector<int> &nums)
{
    int ans;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (j == i)
                continue;
            if (nums[i] == nums[j])
            {
                ans = nums[i];
                return ans;
            }
        }
    }
    return ans;
}

// TC : O(NlogN)
// Sorting and linearly traversing
int Sorted(vector<int> &nums)
{
    int ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            ans = nums[i];
            break;
        }
    }
    return ans;
}

// Using freq array
// TC : O(N)
// SC : O(N)
int Freq(vector<int> &nums)
{
    int ans;
    vector<int> a(nums.size(), 0);
    for (int i = 0; i < nums.size(); i++)
    {
        if (a[nums[i]])
        {
            ans = nums[i];
            break;
        }
        a[nums[i]]++;
    }
    return ans;
}

// better TC: O(N) SC:maps
// putting elements in maps
int maps(vector<int> &nums)
{
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m[nums[i]])
        {
            ans = nums[i];
            break;
        }
        m[nums[i]] = 1;
    }
    return ans;
}

// ------------ Tortoise Approach--------------- //
// Linked list cyclic method
// TC : O(N) SC : O(1)
// --------------- Linked List Cycle Method-----------------//
// Tortoise method : create a cyclic linked list and traverse slow and faster pointer
// stop where they both collides and then put faster to starting point and move both
// pointers by once and that is the repeated element.
// TC: O(N) SC: O(1)

int TortoiseApproach(vector<int> &nums)
{
    int slow = nums[0], fast = nums[0];
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    fast = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums1;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        nums1.push_back(element);
    }
    return 0;
}