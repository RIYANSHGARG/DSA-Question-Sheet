// Name : Riyansh Garg
// UID: 20BCS9849

#include <bits/stdc++.h>
using namespace std;

int euclid(int a, int b)
{
    if (a == 0)
        return b;
    return euclid(b % a, a);
}

int main()
{
    int a, b;
    cout << "Enter First Number = ";
    cin >> a;
    cout << "Enter Second Number = ";
    cin >> b;
    cout << "The GCD function of the number is = " << euclid(a, b) << endl;
    cout << "Name : Riyansh Garg " << endl
         << "UID: 20BCS9849";
    return 0;
}
