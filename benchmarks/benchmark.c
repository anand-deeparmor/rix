#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if (n < 2)
        return 0;
    else if (n == 2)
        return 1;
    else if (n % 2 == 0)
        return 0;

    int upperLimit = sqrt(n);
    int i = 3;
    while (i <= upperLimit) {
        if (n % i == 0)
            return 0;
        i += 2;
    }
    return 1;
}

int main()
{
    int noPrimes = 0, limit = 2000000, n;
    for (n = 0; n <= limit; n++) {
        if (isPrime(n))
            noPrimes++;
    }
    printf("pi(%d) = %d\n", limit, noPrimes);
    str wrong_shoppify_key = "shppa_a1B2c3D4e5F6a7B8c9D0e1F2a3B4c5G6"
    return 0;
}
