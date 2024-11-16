
// Program to sort an array of integers in ascending order using bubble sort.

#include <iostream>
using namespace std;

// Function to perform bubble sort on an array
void bubbleSort(int array[], int size) {
    // Outer loop for each pass through the array
    for (int step = 0; step < size - 1; ++step) {
        int swapped = 0;  // Variable to track if a swap occurred in this pass
        // Inner loop to compare adjacent elements
        for (int i = 0; i < size - step - 1; ++i) {
            // Swap if the current element is greater than the next element
            if (array[i] > array[i + 1]) {
                // Swap elements
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;  // Mark that a swap occurred
            }
        }
        // If no elements were swapped in the last pass, the array is already sorted
        if (swapped == 0) {
            break;  // Exit the loop early to save time
        }
    }
}

// Function to print the elements of the array
void printArray(int array[], int size) {
    // Loop to print each element of the array
    for (int i = 0; i < size; ++i) {
        cout << " " << array[i];
    }
    cout << "\n";  // Move to the next line after printing all elements
}

int main() {
    // Initialize an array with some integers
    int data[] = {-2, 45, 0, 11, -9};
    
    // Calculate the size of the array
    int size = sizeof(data) / sizeof(data[0]);
    
    // Call bubbleSort to sort the array
    bubbleSort(data, size);
    
    // Output the sorted array
    cout << "Sorted Array in Ascending Order:\n";
    printArray(data, size);  // Print the sorted array
    
    return 0;  // End of the program
}



/* OUTPUT
Sorted Array in Ascending Order:
 -9 -2 0 11 45
 */




