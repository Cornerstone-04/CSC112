#include <iostream>
using namespace std;

int linear_search(const int arr[], int size, int target);
int main()
{
    int arr[5];
    int arr2[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    // cout << linear_search(arr2, 10, 6);

    arr[0] = 2;
    arr[1] = 5;
    arr[2] = 69;
    arr[3] = 420;
    arr[4] = 666;

    int multi_arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    cout << multi_arr[0][2];
    return 0;
}

int linear_search(const int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
