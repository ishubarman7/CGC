/* AIM - Write a program to insert a new element at end as well as at a given position in an
   array.*/

#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {1, 2, 3, 4, 5}; // Initial array
    int n = 5;                      // Current size of the array
    int element, position;

    // Insert element at the end
    cout << "Enter the element to insert at the end: ";
    cin >> element;
    arr[n] = element; // Insert at the end
    n++;              // Increase size of the array

    // Display the array after insertion at the end
    cout << "Array after inserting at the end: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insert element at a specific position
    cout << "Enter the position to insert the element (0 to " << n << "): ";
    cin >> position;
    if (position < 0 || position > n)
    {
        cout << "Invalid position!" << endl;
    }
    else
    {
        cout << "Enter the element to insert at position " << position << ": ";
        cin >> element;

        // Shift elements to the right to make space
        for (int i = n; i > position; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[position] = element; // Insert at the position
        n++;                     // Increase size of the array

        // Display the array after insertion at a specific position
        cout << "Array after inserting at position " << position << ": ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}




/*OUTPUT
Enter the element to insert at the end: 20
Array after inserting at the end: 1 2 3 4 5 20
*/