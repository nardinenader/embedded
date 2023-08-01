#include <stdio.h>

int power(int base, int pwr);

int main() {
    int base, pwr;
    printf("Enter base number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &base);
    fflush(stdin); fflush(stdout);

    printf("Enter power number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &pwr);
    fflush(stdin); fflush(stdout);
    printf("%d^%d = %d\n", base, pwr, power(base, pwr));
    return 0;
}

int power(int base, int pwr) {
    if (pwr == 0) {
        return 1;
    } else {
        return base * power(base, pwr - 1);
    }
}
