#include <bits/stdc++.h>
using namespace std;

// Brute Force
pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    vector<int> freq(n + 1, 0);
    pair<int, int> ans(0, 0);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (freq[i] == 0)
        {
            ans.first = i;
        }
        else if (freq[i] == 2)
        {
            ans.second = i;
        }
        else
        {
            continue;
        }
    }
    return ans;
}

// Marking Visited
pair<int, int> markingVisiting(vector<int> &arr, int n)
{
    pair<int, int> ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[abs(arr[i]) - 1] < 0)
        {
            ans.second = abs(arr[i]);
            continue;
        }
        arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
    }
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            ans.first = i + 1;
            break;
        }
    }
    return ans;
}

// Using simple maths : s=n(n+1)/2 , s^2=n(n+1)(2n+1)/6

// Using XOR (Not Understood)

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
    pair<int, int> ans = markingVisiting(nums1, nums1.size());
    cout << ans.first << " " << ans.second << endl;
    return 0;
}