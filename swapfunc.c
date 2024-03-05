#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    swap(&num1, &num2);

    printf("After swapping: First number = %d, Second number = %d\n", num1, num2);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
