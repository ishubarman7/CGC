#include<iostream>

class outside
{
    public:
    int x, y, s;
    void get()
    void sum()
    void show()
};

void outside::get()
{
    std::cout<<"Enter the value of x and y: "<<std::endl;
    std::cin>> x >> y;
}

void outside::sum()
{
    s = x + y;
}



void outside::show()
{
    std::cout<<"The sum of x and y is: "<<s;
}

int main()
{
    outside P;
    P.get();
    P.sum();
    P.show();
    return 0;
}