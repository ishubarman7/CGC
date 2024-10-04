#include<iostream>
using namespace std;
#define pi 3.14

class abc
{   
    public:

    int r, area;

    void calculation()
    {
        area = r*r*pi;
        cout<<"Area of the Circle is: "<<area<<endl;
    }
};
int main()
{
    abc A;
    A.r;
    cout<<"Enter the Radius of the Circle: ";
    cin >> A.r;

    A.calculation();
    return 0;

}

