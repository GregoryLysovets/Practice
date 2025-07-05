#include <stdio.h>

int countSequences(int n) {
    int dp[n + 1];

   dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    for (int i = 3; i <= n; i++) {
       dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 12345;
    }

    return dp[n];
}

int main() {
    int n;

    printf("Enter the length of the sequence: ");
    scanf("%d", &n);

    if (n > 1 && n < 10000) {
        int result = countSequences(n);

        printf("Number of searched sequences: %d\n", result);
    } else {
        printf("Invalid input. Length of the sequence should be between 1 and 9999.\n");
    }

    return 0;
}
