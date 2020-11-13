#include <iostream>

using namespace std;
int main()
{
    int i, n, sum = 1;
    cin >> n;
    cout << 1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << " + " << i;
            sum = sum + i;
        }
    }
    cout << " = " << sum;
    return 0;
}