#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a natural number (greater than 1 and less than 150): ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) {
        printf("The entered number does not satisfy the constraint. Try again.\n");
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;
        }
    }
    printf("The number of equal divisors of the number %d is %d\n", n, count);

    return 0;
}
