#include <stdio.h>

int binarySearch(int arr[], int n, int search) {
    int low = 0;
    int high = n - 1;
    int mid;
    
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == search) {
            return mid;
        }
        else if (arr[mid] < search) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int search, result;

    printf("Enter the number to be searched: ");
    scanf("%d", &search);

    result = binarySearch(arr, sizeof(arr)/sizeof(arr[0]), search);
    
    if (result == -1) {
        printf("The number is not found\n");
    }
    else {
        printf("The number %d is found at index %d\n", search, result);
    }

    return 0;
}

