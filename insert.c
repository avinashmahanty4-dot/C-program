#include <stdio.h>

// UDF to delete element at a given position
int delete(int arr[], int n, int pos) {
    int i;

    // Shift elements to the left
    for(i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return n - 1;   // return updated size
}

// UDF to display array
void display(int arr[], int n) {
    int i;
    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10];
    int n, pos, i;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position to delete
    printf("Enter position to delete: ");
    scanf("%d", &pos);

    // Call delete UDF
    n = delete(arr, n, pos);

    // Display result
    display(arr, n);

    return 0;
}

