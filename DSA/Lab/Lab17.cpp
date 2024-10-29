
// To sort an array of integers in ascending order using insertion sort. 

#include<iostream>
using namespace std;

int main() {
    int size, arr[50], i, j, temp;

    // Input the size of the array
    cout << "Enter Array Size: ";
    cin >> size;

    // Input the elements of the array
    cout << "Enter Array Elements: ";
    for(i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Insertion sort algorithm
    cout << "Sorting array using insertion sort...\n"; 
    for(i = 1; i < size; i++) {
        temp = arr[i];  // Store the current element
        j = i - 1;
        
        // Shift elements of arr[0..i-1] that are greater than temp
        while(j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];  // Shift element to the right
            j = j - 1;
        }
        arr[j + 1] = temp;  // Insert temp in the correct position
    }

    // Output the sorted array
    cout << "Array after sorting: \n";
    for(i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/* OUTPUT
Enter Array Size: 10
Enter Array Elements: 1 4 5 2 7 8 6 3 9 10
Sorting array using insertion sort...
Array after sorting: 
1 2 3 4 5 6 7 8 9 10 
*/
