// Reverse an array using pointers without using extra array

#include <iostream>

using namespace std;

void ReverseArr(int* arr, int size)
{
    // I will define two pointer

    int* left = arr;
    int* right = arr + size - 1; // this operation moves the pointer

    while(left < right)
    {
        swap(*left, *right);
        ++left;
        --right;
    }
}


int main()
{
    int arr[] {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "size: " << size << "\n";

    ReverseArr(arr, size);

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}
