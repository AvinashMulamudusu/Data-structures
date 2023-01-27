#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n, i, search, flag = 0;

    printf("Enter the number to be searched: ");
    scanf("%d", &search);

    n = sizeof(arr)/sizeof(arr[0]);

    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("The number %d is found at index %d\n", search, i);
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        printf("The number is not found\n");
    }

    return 0;
}

