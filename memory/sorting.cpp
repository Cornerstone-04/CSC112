// arranging an array in ascending or descending order
// selection sort
// identify the smallest and swap it to it's right position.

int determineSmallest(int arr[], int startIndex, int endIndex)
{
    int smallest = arr[startIndex];
    int index = startIndex;
    for (int i = startIndex + 1; i < endIndex; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            index = i;
        }
        return i;
    }
}

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int indexOfSmallest = determineSmallest(arr, i, size);
        int temp = arr[i];
        arr[i]=arr[indexOfSmallest];
        arr[indexOfSmallest] = temp;
    }
}