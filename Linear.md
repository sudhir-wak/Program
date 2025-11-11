#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Fixed integer array
    int n = 5;                        // Size of array
    int search = 30;                  // Number to search (you can change it)
    int i, found = 0;                 // 'found' flag to check if number is found

    // Linear search logic
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element %d found at position %d\n", search, i + 1);
            found = 1;
            break;
        }
    }

    // If element not found
    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
