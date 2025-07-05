#include <stdio.h>

int main() {
    int t1, t2, t3;
    float time;

    printf("Enter three values (t1 t2 t3): ");
    scanf("%d %d %d", &t1, &t2, &t3);

    if (t1 > 10000 || t2 > 10000 || t3 > 10000) {
        printf("Error! Enter a number not exceeding 10000!\n");
        return 0;
    }

    time = 1.0 / ((1.0 / t1) + (1.0 / t2) + (1.0 / t3));

    printf("The time required to eat the pie is %.2f hours\n", time);

    return 0;
}
