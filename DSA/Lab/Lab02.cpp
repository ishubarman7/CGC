/* AIM - Write a program to delete an element from a given whose value is given or
  whose position is given.*/

#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {1, 2, 3, 4, 5};  // Initial array
    int n = 5;                       // Current size of the array
    int value, position;

    // Delete element by value
    cout << "Enter value to delete: ";
    cin >> value;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1]; // Shift elements left
            }
            n--; // Decrease size
            break;
        }
    }
    // Display the array after deletion by value
    cout << "Array after deleting value: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Delete element by position
    cout << "Enter position to delete (0 to " << n - 1 << "): ";
    cin >> position;

    if (position >= 0 && position < n)
    {
        for (int i = position; i < n - 1; i++)
        {
            arr[i] = arr[i + 1]; // Shift elements left
        }
        n--; // Decrease size
    }
    else
    {
        cout << "Invalid position!" << endl;
    }

    // Display the array after deletion by position
    cout << "Array after deleting position: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
/*OUTPUT

*/

