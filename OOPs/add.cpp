#include<iostream>

class add
{
    public:
    int a,b,c;

    void addition()
    {
    c = a + b;
    std::cout<<"Addition of two numbers a and b are equal to: "<<c<<std::endl;
    }
};
int main()
{
    add A1;
    A1.a, A1.b;
    std::cout<<"Enter the Two Numbersa a and b: "<<std::endl;
    std::cin>>A1.a;
    std::cin>>A1.b;

    A1.addition();
    return 0;

}