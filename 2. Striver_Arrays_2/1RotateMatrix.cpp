#include <iostream>
using namespace std;

// Method 1
// A 2D matrix and copy as you want
// Time Complexity : O(N^2)
// Space Compexity : O(N^2)

// Method 2
// 1) Transpose => its just a swap Function we will get a transpose matrix.
// 2) Reverse
// TC : O(N^2)
// SC : O(1)

vector<vector<int>> RotateWithExtraSpace(vector<vector<int>> v)
{
    int n = v.size();
    vector<vector<int>> rotated(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            rotated[i][n - j - 1] = v[j][i];
        }
    }
    return rotated;
}

vector<vector<int>> RotateMatrix(vector<vector<int>> matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
    return matrix;
}

int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> matrix(row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int element;
            cin >> element;
            matrix.push_back(element);
        }
    }

    return 0;
}