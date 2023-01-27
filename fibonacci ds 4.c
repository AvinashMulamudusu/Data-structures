#include <stdio.h>

int main() {
    int num, i, j;
    int factorial = 1;

    printf("Enter the number of terms in the factorial series: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        factorial = 1;
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        printf("%d! = %d\n", i, factorial);
    }

    return 0;
}

