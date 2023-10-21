#include <stdio.h>

struct number
{
    float r;
    float i;
};

struct number summ(struct number n1, struct number n2);

int main()
{
    struct number n1;
    struct number n2;

    printf("For the 1st complex number\nEnter real and imaginary respectively: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f", &n1.r, &n1.i);

    printf("For the 2nd complex number\nEnter real and imaginary respectively: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f", &n2.r, &n2.i);

    struct number result = summ(n1, n2);

    printf("Sum: %f + %f i\n", result.r, result.i);

    return 0;
}

struct number summ(struct number n1, struct number n2)
{
    struct number result;
    result.r = n1.r + n2.r;
    result.i = n1.i + n2.i;
    return result;
}
