#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
        return -1;
    }
}

int main()
{
    int scores[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << linearSearch(scores, 8, 15);
}