#include <bits/stdc++.h>
using namespace std;

bool Find(vector<vector<int>> &matrix, int target)
{
    bool ans = false;
    if (target >= matrix[2][0])
    {
        cout << matrix[2][0];
        // for (int i = 0; i < matrix[2].size(); i++)
        // {
        //     if (target == matrix[2][i])
        //     {
        //         ans = true;
        //         return ans;
        //     }
        // }
    }
    // for (int i = 0; i < matrix.size() - 1; i++)
    // {
    //     if (target >= matrix[i][0] && target < matrix[i + 1][0])
    //     {
    //         for (int j = 0; j < matrix[i].size(); j++)
    //         {
    //             if (target == matrix[i][j])
    //             {
    //                 ans = true;
    //                 return ans;
    //             }
    //         }
    //     }
    //     else
    //     {
    //         ans = false;
    //     }
    // }
    return ans;
}

// best Approach if matrix is sorted row wise and col wose but not as a whole 2d wise
bool BetterApproach(vector<vector<int>> &matrix, int target)
{
    bool ans = false;
    int i = 0, j = matrix[0].size() - 1;
    while (i < matrix.size() && j >= 0)
    {
        if (target == matrix[i][j])
        {
            ans = true;
            return ans;
        }
        else if (target > matrix[i][j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return ans;
}

// Best Approach if the array is sorted as a whole 2d matrix
// Binary Search without making it a linear array to find index (X/col , x%col;)
bool BestApproach(vector<vector<int>> &matrix, int target)
{
    bool ans = false;
    int row = matrix.size(), col = matrix[0].size();
    int s = 0, e = row * col - 1, m;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (target == matrix[m / col][m % col])
        {
            ans = true;
            return ans;
        }
        else if (target < matrix[m / col][m % col])
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }
    return ans;
}

int main()
{
    int row, col, target;
    cin >> row >> col >> target;
    vector<vector<int>> matrix(row);
    for (int i = 0; i < row; i++)
    {
        vector<int> parts(4, 0);
        for (int j = 0; j < col; j++)
        {
            int element;
            cin >> element;
            parts.push_back(element);
        }
        matrix.push_back(parts);
    }
    bool ans = Find(matrix, target);
    cout << ans;
    return 0;
}