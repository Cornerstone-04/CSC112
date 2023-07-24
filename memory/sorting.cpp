// arranging an array in ascending or descending order
// selection sort
// identify the smallest and swap it to it's right position.
#include <iostream>
using namespace std;

int determineSmallest(int arr[], int startIndex, int endIndex)
{
    int smallest = arr[startIndex], index = startIndex;
    for (int i = startIndex + 1; i < endIndex; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            index = i;
        }
    }
    return index;
}

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int indexOfSmallest = determineSmallest(arr, i, size);
        int temp = arr[i];
        arr[i] = arr[indexOfSmallest];
        arr[indexOfSmallest] = temp;
    }
}

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Sorted numbers: ";
    selectionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}