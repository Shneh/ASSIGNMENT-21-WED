#include <stdio.h>

int main() {
    int array[100];
    int size, targetNumber;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements separated by space:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }

    printf("Enter the target number: ");
    scanf("%d", &targetNumber);

    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] % targetNumber == 0) {
            count++;
        }
    }

    printf("Total numbers exactly divisible by %d: %d\n", targetNumber, count);

    return 0;
}
