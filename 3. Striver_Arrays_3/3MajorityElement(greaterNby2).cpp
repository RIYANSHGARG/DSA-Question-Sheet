// Majority element ( >N/2)
// https://leetcode.com/problems/majority-element/

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{

    // My Approach
    // TC : O(nlogn) => worst case time complexity for searching in maps is logn.
    // SC : O(n)
    // int count=0;
    // unordered_map<int,int> m;
    // for(int i=0;i<nums.size();i++){
    //     if(!m[nums[i]]){
    //         m[nums[i]] = 1;
    //         if(count == 0){
    //             count = nums[i];
    //         }
    //         continue;
    //     }
    //     if(m[count] < m[nums[i]]+1 && count!=nums[i]){
    //         count = nums[i];
    //     }
    //     m[nums[i]]++;
    // }
    // return count;

    // Best Approach
    // -------------------Moore's Voting Algorithm-----------------------//
    // TC : O(N)
    // SC : O(1)

    int count = 0, element = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
            element = nums[i];
        if (element == nums[i])
            count++;
        else
            count--;
    }
    return element;
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
    int ans = majorityElement(nums1);
    cout << ans;
    return 0;
}