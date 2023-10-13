#include <stdio.h>
#include <cmath>

long long tinhGiaiThua(long long m);

int main()
{
    long long a, b;
    long long check = 1;
    scanf("%lld %lld", &a, &b);

// tim gia tri nho nhat
    long long m = fmin(a, b);

    // for (int i = 1; i <= m; i++)
    // {
    //     check *= i;
    // }
    long long ketQua = tinhGiaiThua(m);

    // printf("%lld", check);
    printf("%lld", ketQua);

    return 0;
}

    long long tinhGiaiThua(long long m) {
        if (m == 1)
        {
            return m;
        }
        else {
            return m * tinhGiaiThua(m - 1);
        }
        
    }
