#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    // int row, col;
    // cin >> row >> col;
    // int ans = 1;

    // // Shortcut of finding nCr

    // for (int i = 0; i < col - 1; i++)
    // {
    //     ans *= (row - 1 - i);
    //     ans /= (i + 1);
    // }
    // cout << ans << endl;

    // if we initialize the size of the vector then use indexing and
    // if we dont initialize the size of the vector then use push_back()

    // int row, ans = 1;
    // cin >> row;
    // vector<int> row_of_pascal;
    // row_of_pascal.push_back(1);
    // for (int i = 0; i < row - 1; i++)
    // {
    //     ans *= (row - 1 - i);
    //     ans /= (i + 1);
    //     row_of_pascal.push_back(ans);
    // }

    // for (auto i : row_of_pascal)
    // {
    //     cout << i;
    // }
    // for (int i = 0; i <= 2 * row - 1; i++)
    // {
    //     cout << row_of_pascal[i];
    // }

    int row, solve = 1;
    cin >> row;
    vector<vector<int>> ans(row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0)
            {
                ans[i].push_back(1);
                continue;
            }
            solve *= i - j + 1;
            solve /= j;
            ans[i].push_back(solve);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ans[i][j];
        }
    }
    return 0;
}