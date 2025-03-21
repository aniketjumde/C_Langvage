#include <stdio.h>

void printPattern(int n) {
    int size = 2 * n - 1; // Size of the square pattern

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int min = i < j ? i : j;
            min = min < size - i - 1 ? min : size - i - 1;
            min = min < size - j - 1 ? min : size - j - 1;
            printf("%d ", n - min);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}
