#include <iostream>
using namespace std;

template <class t>
void compare(t a, t b)
{
    t largest;
    if (a > b)
    {
        largest = a;
    }
    else
    {
        largest = b;
    }
    cout << "Largest = " << largest << endl;
}

int main()
{
    int i, j;
    cout << "Enter the integer values: " << endl;
    cin >> i >> j;
    compare(i, j); // Compare integers

    float p, q;
    cout << "Enter the float values: " << endl;
    cin >> p >> q;
    compare(p, q); // Compare floats

    return 0;
}
