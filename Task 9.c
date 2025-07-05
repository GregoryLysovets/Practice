#include <stdio.h>
#include <string.h>

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int countAnagrams(char word[]) {
    int count[59] = {0};  

    int len = strlen(word);
    int totalAnagrams = factorial(len);  

    for (int i = 0; i < len; i++) {
        int index = word[i] - 'A';  
        count[index]++;
    }

    for (int i = 0; i < 59; i++) {
        if (count[i] > 1) {
            totalAnagrams /= factorial(count[i]);
        }
    }

    return totalAnagrams;
}

int main() {
    char word[15];
    printf("Enter a word: ");
    scanf("%s", word);

    int anagramCount = countAnagrams(word);
    printf("Number of anagrams: %d\n", anagramCount);

    return 0;
}
