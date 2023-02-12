// Name : Riyansh Garg
// UID : 20BCS9849
#include <bits/stdc++.h>
using namespace std;

int p(int var, int power)
{
    if (power == 0)
        return 1;
    int temp = p(var, power / 2);
    if (power % 2 == 0)
        return temp * temp;
    else
        return temp * temp * var;
}

int main()
{
    int var = 0, power = 0;
    float a = 0;
    cin >> var >> power;
    int ans = (power > 0) ? p(var, power) : p(var, abs(power));
    a = (power > 0) ? ans : 1 / float(ans);
    cout << a << endl
         << "Name : Riyansh Garg \n UID : 20BCS9849";
    return 0;
}