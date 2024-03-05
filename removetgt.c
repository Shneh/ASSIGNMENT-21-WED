#include <stdio.h>

int main() {
    int n, i, toRemove, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search and remove: ");
    scanf("%d", &toRemove);

    for (i = 0; i < n; i++) {
        if (arr[i] == toRemove) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            found = 1;
            n--;
            break;
        }
    }

    if (found) {
        printf("Array after removing %d: ", toRemove);
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\nIndex of removed element: %d\n", i);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
