// Reverse an array using pointers

#include <iostream>

using namespace std;

void PrintArr(int* arr, int size)
{
    for (int i = 0; i <=size-1; ++i)
    {
        cout << *arr << " ";
        ++arr;
    }
    cout << "\n";
}



int main()
{
    int arr[] {1,2,3,4,5,6};
    const int size = 6;

    int reverse_arr[size];

    int* p = arr;

    for (int i = 0; i < size; ++i)
    {
        reverse_arr[size-1-i] = *p;
        ++p;
    }

    cout << "Input array: ";
    PrintArr(arr, size);
    cout << "Reverse array: ";
    PrintArr(reverse_arr, size);

    return 0;
}
