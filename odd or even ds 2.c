#include <stdio.h>

int main() {
    int num, i;
    int numbers[10];

    printf("Enter 10 numbers: \n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Odd numbers: \n");
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d\n", numbers[i]);
        }
    }

    printf("Even numbers: \n");
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d\n", numbers[i]);
        }
    }

    return 0;
}

