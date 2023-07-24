#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    int size, target;

    cout << "Enter size: ";
    cin >> size;

    int scores[size];

    cout << "Enter " << size << " scores: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> scores[i];
    }

    cout << "Enter target: ";
    cin >> target;

    int result = linearSearch(scores, size, target);

    if (result != -1)
    {
        cout << "Target found: " << target << " at index " << result << endl;
    }
    else
    {
        cout << "Target not found." << endl;
    }

    return 0;
}