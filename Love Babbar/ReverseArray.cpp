#include <bits/stdc++.h>
using namespace std;

int *iter(int a[], int n)
{
    for (int i = 0; i < (n - 1) / 2; i++)
    {
        swap(a[i], a[n - i - 1]);
    }
    return a;
}

void recursive(int a[], int start, int end)
{
    if (start >= end)
        return;
    swap(a[start], a[end]);
    recursive(a, start + 1, end - 1);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    recursive(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    return 0;
}