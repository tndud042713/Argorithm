#include <stdio.h>

int digit_sum(int x)
{
    int sum = 0;
    while (1)
    {
        if (x % 10 == 0)
            break;
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    int a[101];
    int b[101];
    int i, n, x, max = 0, maxinput = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        a[i] = x;
        b[i] = digit_sum(x);
        if (b[i] > max)
        {
            max = b[i];
            maxinput = a[i];
        }
        else if (b[i] == max)
        {
            if (a[i] > maxinput)
                maxinput = a[i];
        }
    }
    printf("%d", maxinput);
    return 0;
}