// arrays are passed to functions by declaring the array as a parameter.
// index out of range
// provide an additional parameter that tells the size of the array
#include <iostream>
using namespace std;

int sumOfContent(int scores[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += scores[i];
    }
    return sum;
}

// to call a function that requires an array, pass the name of the function to the array.
int main()
{
    int scores[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int sum = sumOfContent(scores, 10);
    cout << sum;
}

// a pointer is the address of a variable
// passing more than one value to a function can be done with an array

/**
 * you can search through an array through a searching algorithm:
 * Linear Search: Visiting each component from the beginning, until to reach the required element or uns=til the end of the array(in which case the element doesn't exist). More suitable for small collections
 * Binary Search: Sort the elements, split the array into two(not always equal), check if the middle element is the element you're looking for.Then check is the middle element is less than, or greater than the required element. More suitable for larger collections
 */