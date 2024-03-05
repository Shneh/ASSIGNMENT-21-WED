#include <stdio.h>

int main() {
    int array[100];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements separated by space:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }

    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; ++i) {
        sum += array[i];
        product *= array[i];
    }

    printf("Sum of all elements: %d\n", sum);
    printf("Product of all elements: %d\n", product);

    return 0;
}
