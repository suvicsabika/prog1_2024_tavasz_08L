#include <stdio.h>

int is_multiple_of_3_or_5(int n) {
    return (n % 3 == 0 || n % 5 == 0);
}

int sum_of_multiples(int n, int limit)
{
    if (n >= limit) {
        return 0;
    }

    if (is_multiple_of_3_or_5(n)) {
        return n + sum_of_multiples(n + 1, limit);
    }
    else {
        return sum_of_multiples(n + 1, limit);
    }
}

int main()
{
    int limit = 1000;
    int result = sum_of_multiples(1, limit);

    printf("result: %d\n", result);

    return 0;
}