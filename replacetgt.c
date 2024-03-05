#include <stdio.h>

int main()
{
    int size, i, target, index, new_element;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &target);

    index = -1;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("Element found at index %d.\n", index);

        printf("Enter the new element to be replaced: ");
        scanf("%d", &new_element);

        arr[index] = new_element;

        printf("Array after replacement: ");
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
