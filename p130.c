#include <stdio.h>

void print_array(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("\n%d", arr[i]);
    }
}

int main()
{
    int size, i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];  // Variable-length array (VLA)

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    print_array(arr, size);  // No explicit pointer used here

    return 0;
}

