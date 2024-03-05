#include <stdio.h>

int isPrime(int num);

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = isPrime(num);

    if (result == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}
