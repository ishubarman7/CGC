#include<iostream>
using namespace std;

#define pi 3.14

int r=5;

void area();

class abc
{
    public:
    int x, y, z;

    void display()
    {
        z=x*y;
        cout<<z<<endl;
    }

};

int main()

{
    abc A1;
    A1.x=5;
    A1.y=50;
    A1.display();
    return 0;
}