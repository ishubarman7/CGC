
// Program to sort an array of integers in ascending order using quick sort.

#include <bits/stdc++.h>
using namespace std;

// Partition function to place the pivot in the correct position
int partition(int *a, int start, int end) {
    int pivot = a[end];  // Pivot element (chosen as the last element)
    int P_index = start; // Index for placing smaller elements
    int t;               // Temporary variable for swapping

    // Traverse the array and place elements smaller than pivot to the left
    for (int i = start; i < end; i++) {
        if (a[i] <= pivot) {
            // Swap the current element with the element at P_index
            t = a[i];
            a[i] = a[P_index];
            a[P_index] = t;
            P_index++; // Increment P_index
        }
    }

    // Swap the pivot element with the element at P_index
    t = a[end];
    a[end] = a[P_index];
    a[P_index] = t;

    // Return the index of the pivot
    return P_index;
}

// Quick Sort function
void Quicksort(int *a, int start, int end) {
    if (start < end) {
        // Partition the array and get the pivot index
        int P_index = partition(a, start, end);

        // Recursively sort the elements before and after partition
        Quicksort(a, start, P_index - 1);
        Quicksort(a, P_index + 1, end);
    }
}

int main() {
    int n;
    
    // Input the number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];  // Array to store the elements
    
    // Input the array elements
    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Perform Quick Sort
    Quicksort(a, 0, n - 1);

    // Output the sorted array
    cout << "After Quick Sort, the array is:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}





/*OUTPUT
Enter number of elements: 10
Enter the array elements:
1 10 5 7 2 9 6 4 8 3 
After Quick Sort, the array is:
1 2 3 4 5 6 7 8 9 10
*/





