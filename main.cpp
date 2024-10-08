#include <iostream>
#include "sortArray.h"

using namespace std; 

int main() {
    int arr[] = {1, 5, 6, 4, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    Sorting::bubbleSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
