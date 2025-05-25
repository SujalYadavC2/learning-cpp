// finding duplicate elements in an array

#include <iostream>
#include <vector> //these are dynamical arrays
#include <algorithm> // to use find function

using namespace std;

void DuplicateElements(int* arr, int size)
{
    //need a vector to store duplicate elements

    vector<int> duplicate;

    for (int i = 0; i < size; ++i)
    {
        for (int j = i+1; j < size; ++j)
        {
            if (arr[i] == arr[j])
            {
                if (find(duplicate.begin(), duplicate.end(), arr[i]) == duplicate.end()) //search if element is already in duplicate vector or not
                {
                    duplicate.push_back(arr[i]); //add duplicate elements
                }
            }
        }
    }

    cout << "Duplicate elements: ";
    for (auto i : duplicate)
    {
        cout << i << " ";
    }

    cout << "\n";
}

int main()
{
    // I will work with integer array

    int arr[] {1,2,3,1,5,3};
    int size = sizeof(arr)/sizeof(arr[0]);


    DuplicateElements(arr, size);

    return 0;
}
