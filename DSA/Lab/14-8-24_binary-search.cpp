#include<iostream>
using namespace std;

int binarysearch(int array[], int left, int right, int x)
{
    int mid;
    while(left <= right)
    {
        mid = (left + right)/2;
        
            if(array[mid] == x)
            return mid;
            
            else if(array[mid] < x)
            left = mid + 1;

            else
            right = mid - 1;
    }
    return -1;


}

int main()
{
    int array[] = {2,5,8,9,10,18,19,21,25,26,29};
    int x = 9;
    int n = sizeof(array) / sizeof(array[0]);
    int left = 0;
    int right = n - 1;

    int result = binarysearch(array, left, right, x);

    
    (result != -1) ? cout<<"the number "<<x<<" is fount at index; "<<result<<endl : cout<<"Element not found";
    
    return 0;
}


