// Name : Riyansh Garg
// UID : 20BCS9849
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> v;
    unordered_map<int, int> m;
    unordered_map<int, int>::iterator itr;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
        if (m.find(v[i]) == m.end())
            m[v[i]] = 1;
        else
            m[v[i]]++;
    }
    cout << "Name : Riyansh Garg \n UID : 20BCS9849" << endl;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    return 0;
}