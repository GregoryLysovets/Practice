#include <stdio.h>

int count_valid(int r) {
    if (r > 30 || r < 1) {
        printf("Error!\n");
        return 0;
    }

     int dp[31][2] = {0}; 

    dp[1][0] = 2; 
    dp[1][1] = 0; 

    for (int i = 2; i <= r; i++) {
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1]; 
        dp[i][1] = dp[i - 1][0];              
    }

    return dp[r][0] + dp[r][1]; // загальна кількість варіантів
}

int main() {
    int r;
    printf("Enter the number of digits: ");
    scanf("%d", &r);

    int result = count_valid(r);
    if (result != 0)
        printf("Number of valid numbers: %d\n", result);

    return 0;
}
