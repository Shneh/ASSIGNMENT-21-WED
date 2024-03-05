#include <stdio.h>

int main() {
    int n, i;
    double sum = 0, fact = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        if (i == 0)
            fact = 1;
        else {
            fact *= i;
        }
        sum += fact;
    }

    printf("Sum of the series: %.2lf\n", sum);

    return 0;
}
