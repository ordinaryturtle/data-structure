#include <stdio.h>

void traverse(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\ta[%d] = %d", i, array[i]);
    }
    printf("\n");
}

void insert_end(int array[], int *n) {
    int x;
    printf("Enter The Element: ");
    scanf("%d", &x);
    array[*n] = x;
    (*n)++;
    traverse(array, *n);
}

void insert_beginning(int array[], int *n) {
    int x;
    printf("Enter The Element: ");
    scanf("%d", &x);
    for (int i = *n; i > 0; i--) {
        array[i] = array[i - 1];
    }
    array[0] = x;
    (*n)++;
    traverse(array, *n);
}

void insert_any(int array[], int *n) {
    int x, y;
    printf("Enter The Element: ");
    scanf("%d", &x);
    printf("Enter The Position of the Element: ");
    scanf("%d", &y);
    for (int i = *n; i >= y; i--) {
        array[i] = array[i - 1];
    }
    array[y - 1] = x;
    (*n)++;
    traverse(array, *n);
}

void del_beginning(int array[], int *n) {

    for (int i = 0; i < *n - 1; i++) {
        array[i] = array[i + 1];
    }
    (*n)--;
    traverse(array, *n);
}

int main() {
    int array[100], n, i, op;

    printf("Enter The Size Of Array To Create: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter a[%d]: ", i);
        scanf("%d", &array[i]);
    }

    do {
        printf("\nEnter Command to Use:\n");
        printf("1. Traverse\n");
        printf("2. Insert At End\n");
        printf("3. Insert At Beginning\n");
        printf("4. Insert At Any Position\n");
        printf("5. Delete at Beginning\n");
        printf("10. Exit\n");
        printf("Choice: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                traverse(array, n);
                break;
            case 2:
                insert_end(array, &n);
                break;
            case 3:
                insert_beginning(array, &n);
                break;
            case 4:
                insert_any(array, &n);
                break;
            case 5:
                del_beginning(array, &n);
                break;
            case 10:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (op != 10);

    return 0;
}


