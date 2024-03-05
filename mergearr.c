#include <stdio.h>

int main() {
    int array1[100], array2[100], mergedArray[200];
    int size1, size2, mergedSize;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter %d elements for the first array separated by space:\n", size1);
    for (int i = 0; i < size1; ++i) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    printf("Enter %d elements for the second array separated by space:\n", size2);
    for (int i = 0; i < size2; ++i) {
        scanf("%d", &array2[i]);
    }

    mergedSize = size1 + size2;

    for (int i = 0; i < size1; ++i) {
        mergedArray[i] = array1[i];
    }

    for (int i = 0; i < size2; ++i) {
        mergedArray[size1 + i] = array2[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < mergedSize; ++i) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
