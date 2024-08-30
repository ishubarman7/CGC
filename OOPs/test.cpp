#include<iostream>
using namespace std;
int main()
{
   const int a=1,b=2,c=3;
    int first,second;

    cin >>first >>second;

    if(a==first&b==second)
    cout<<c;

    else if(b==first&c==second)
    cout<<a;

    else if(a==first&c==second)
    cout<<b;

    // else if(b==first&a==second)
    // cout<<c;

    // else if(c==first&b==second)
    // cout<<a;

    // else if(c==first&a==second)
    // cout<<b;


    return 0;

}