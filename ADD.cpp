#include <stdio.h>

int main() {
    int arr[100];
    int n, i, sum = 0;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = arr;  // Pointer points to the array

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", ptr + i);       // Store input using pointer
        sum += *(ptr + i);          // Add value using pointer dereferencing
    }

    printf("\nArray elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));  // Print values using pointer
    }

    printf("\n\nSum of the elements = %d\n", sum);

    return 0;
}

