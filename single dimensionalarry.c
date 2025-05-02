#include <stdio.h>
#define MAX 100
void insert(int arr[], int *n, int element, int pos) {
    if (pos < 0 || pos > *n) {
        printf("Invalid position\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    (*n)++;
}

void delete(int arr[], int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Invalid position\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

int find(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element)
            return i;
    }
    return -1;
}

void display(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX] = {10, 20, 30, 40, 50};
    int n = 5;

    printf("Initial ");
    display(arr, n);

    insert(arr, &n, 25, 2);
    printf("After Insertion at position 2: ");
    display(arr, n);

    delete(arr, &n, 3);
    printf("After Deletion at position 3: ");
    display(arr, n);

    int pos = find(arr, n, 50);
    if (pos != -1)
        printf("Element 50 found at index: %d\n", pos);
    else
        printf("Element 50 not found\n");

    return 0;
}
