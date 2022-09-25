#include <bits/stdc++.h>
using namespace std;

double power(double x, long long int n)
{
    // if (n == 0)
    // {
    //     return 1;
    // }
    // if (n % 2 == 0)
    // {
    //     return power(x, n / 2) * power(x, n / 2);
    // }
    // else
    // {
    //     return power(x, n / 2) * power(x, n / 2) * x;
    // }

    // Using Memoization
    double temp;
    if (n == 0)
        return 1;
    temp = power(x, n / 2);
    if (n % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

int main()
{
    int n, x;
    cin >> x >> n;
    // Joke Method 1
    // double ans = pow(x,n);

    // Using for loop for n times : Method 2

    // using recursion : Method 3
    long long int np = (n > 0) ? n : abs(n);
    double ans1 = power(x, np);
    double ans2 = (n > 0) ? ans1 : 1 / double(ans1);
    cout << ans2;

    return 0;
}