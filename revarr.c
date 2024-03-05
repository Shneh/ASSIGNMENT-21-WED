#include <stdio.h>

int main() {
    int array[100];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
  
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }
    int t;
    for(int i=0; i<size/2; i++){
      t=arr[i];
      arr[i]=arr[size-i-1];
      arr[size-i-1]=t;
    }

    printf("Reversed array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
