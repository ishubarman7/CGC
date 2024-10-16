
// Program to sort an array of integers in ascending order using selection sort.

#include<iostream>
using namespace std;

int main() {
    int size, arr[50], i, j, temp, index, small;

    // Input the size of the array
    cout << "Enter Array Size: ";
    cin >> size;

    // Input the elements of the array
    cout << "Enter Array Elements: ";
    for(i = 0; i < size; i++) 
        cin >> arr[i];

    // Selection sort algorithm
    cout << "Sorting array using selection sort...\n"; 
    for(i = 0; i < (size - 1); i++) {
        small = arr[i];  // Assume the current element is the smallest
        index = i;       // Store its index

        // Find the smallest element in the unsorted portion of the array
        for(j = i + 1; j < size; j++) {
            if(small > arr[j]) {
                small = arr[j];  // Update smallest element
                index = j;       // Update index of smallest element
            }
        }

        // Swap the smallest element found with the first element of the unsorted portion
        if(index != i) {
            temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }

    // Output the sorted array
    cout << "Now the Array after sorting is: \n";
    for(i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}
