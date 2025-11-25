#include <stdio.h>

int main() {
    int arr[100];
    int n, i, sum = 0;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = arr; 

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", ptr + i);       
        sum += *(ptr + i);         
    }

    printf("\nArray elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));  
    }

    printf("\n\nSum of the elements = %d\n", sum);

    return 0;
}


