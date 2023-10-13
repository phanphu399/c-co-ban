#include <stdio.h>
#include <math.h>

int main()
{
    long long a, b;
    long long check = 1;
    scanf("%lld %lld", &a, &b);

    long long m = fmin(a, b);

    for (int i = 1; i <= m; i++)
    {
        check *= i;
    }
    
    printf("%lld", check);

    return 0;
}
