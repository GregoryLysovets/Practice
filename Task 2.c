#include <stdio.h>

// Функція для обчислення НСД (алгоритм Евкліда)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Функція для обчислення НСК кількох чисел
int lcm(int numbers[], int count) {
    int result = numbers[0];

    for (int i = 1; i < count; i++) {
        result = (result * numbers[i]) / gcd(result, numbers[i]);
    }

    return result;
}

int main() {
    int p;

    printf("Enter the number of values (2-20): ");
    scanf("%d", &p);

    if (p < 2 || p > 20) {
        printf("Error! The number of inputs must be between 2 and 20.\n");
        return 1;
    }

    int b[p];
    printf("Enter %d natural numbers separated by spaces: ", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &b[i]);
        if (b[i] <= 0) {
            printf("Error! All numbers must be natural (greater than 0).\n");
            return 1;
        }
    }

    int result = lcm(b, p);
    printf("Least common multiple: %d\n", result);

    return 0;
}
