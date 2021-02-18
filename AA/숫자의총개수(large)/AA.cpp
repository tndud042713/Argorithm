#include <stdio.h>

int multiple(int x)
{
    int mul = 1;
    if (x == 0)
        return 9;
    while (x > 0)
    {
        mul *= 10;
        x--;
    }
    return mul * 9;
}
int main()
{
    int n , i, dap, tmp, sub = 0, cnt = 0;
    scanf("%d", &n);
    tmp = n; // n이 변하면 안됨
    while (tmp > 0)
    {
        tmp /= 10;
        cnt++;
    }

    for (i = 0; i < cnt-1; i++)
    {
        sub += multiple(i)*(cnt-i-1);
    }
    dap = n * cnt - sub;
    printf("%d\n", dap);
    return 0;
}
