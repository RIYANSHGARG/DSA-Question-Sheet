#include <iostream>
using namespace std;
vector<vector<int>> ans(vector<vector<int>> intervals)
{
    // Brute force approach
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<int> p;
    p.push_back(intervals[0][0]);
    p.push_back(intervals[0][1]);
    vector<vector<int>> merged;
    for (int i = 0; i < n; i++)
    {
        if (p[1] < intervals[i][0])
        {
            merged.push_back(p);
            p = intervals[i];
        }
        else
        {
            p[1] = (p[1] > intervals[i][1]) ? p[1] : intervals[i][1];
        }
    }
    merged.push_back(p);
    return merged;
}

int main()
{

    return 0;
}