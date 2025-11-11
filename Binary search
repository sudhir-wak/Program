#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Sorted array
    int n = 5;                        // Number of elements in array
    int search = 40;                  // Element to search
    int low = 0, high = n - 1, mid;
    int found = 0;

    // Binary search logic
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == search) {
            printf("Element %d found at position %d\n", search, mid + 1);
            found = 1;
            break;
        }
        else if (arr[mid] < search) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
