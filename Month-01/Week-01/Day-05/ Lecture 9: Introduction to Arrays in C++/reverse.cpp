#include <iostream>
using namespace std;

/*
==========================================================
        Program: Reverse an Array
==========================================================

This program reverses an array by swapping
the first element with the last element,
the second element with the second last,
and so on.
*/


//----------------------------------------------------------
// Function: reverse()
// Purpose:
//      Reverse the given array.
//
// Parameters:
//
// arr[] -> Integer array.
// n     -> Total number of elements.
//
// Return:
//      Nothing (void).
//----------------------------------------------------------
void reverse(int arr[], int n)
{
    // First index of the array.
    int start = 0;

    // Last index of the array.
    int end = n - 1;

    /*
        Continue swapping until

        start becomes greater than end.
    */
    while (start < end)
    {
        /*
            Swap first element
            with last element.
        */
        swap(arr[start], arr[end]);

        // Move forward.
        start++;

        // Move backward.
        end--;
    }
}


//----------------------------------------------------------
// Function: printArray()
// Purpose:
//      Print all elements of the array.
//----------------------------------------------------------
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}


//----------------------------------------------------------
// Main Function
//----------------------------------------------------------
int main()
{
    /*
        First Array

        Before Reverse

        2 3 4 5 67 86
    */
    int arr[6] = {2, 3, 4, 5, 67, 86};

    /*
        Second Array

        Before Reverse

        23 34 54 32 12
    */
    int brr[5] = {23, 34, 54, 32, 12};

    /*
        Reverse first array.
    */
    reverse(arr, 6);

    /*
        Reverse second array.
    */
    reverse(brr, 5);

    cout << "Reversed First Array:" << endl;
    printArray(arr, 6);

    cout << "Reversed Second Array:" << endl;
    printArray(brr, 5);

    return 0;
}
