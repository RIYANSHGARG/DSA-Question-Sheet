#include <bits/stdc++.h>

using namespace std;

vector<int> missing(vector<int> a, vector<int> b)
{
    vector<int> ans;
    unordered_map<int, int> m;
    for (auto i : b)
    {
        m[i]++;
    }
    for (auto i : a)
    {
        m[i]--;
    }
    for (int i = m.begin(); i != m.end(); i++)
    {
        if (m->second > 0)
        {
            ans.push_back(m->first);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int size1, size2;
    cin >> size1 >> size2;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < size1; i++)
    {
        int element;
        cin >> element;
        a.push_back(element);
    }
    for (int i = 0; i < size2; i++)
    {
        int element;
        cin >> element;
        b.push_back(element);
    }
    vector<int> ans = missing(a, b);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}