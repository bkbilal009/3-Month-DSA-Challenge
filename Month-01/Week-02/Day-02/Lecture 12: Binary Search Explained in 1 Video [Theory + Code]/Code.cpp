#include<iostream>
using namespace std;

/*
==========================================================
            Binary Search Program
==========================================================

Binary Search works only on a SORTED array.

Time Complexity  : O(log n)
Space Complexity : O(1)

Example

Array

2 3 41 44 56 77

Key = 56
*/


//----------------------------------------------------------
// Function: BinarySearch()
// Purpose:
//      Find the index of a given element
//      using Binary Search.
//
// Parameters:
//
// arr[] -> Sorted array.
// size  -> Total number of elements.
// key   -> Element to search.
//
// Return:
//
// Index of the key if found.
// Otherwise return -1.
//----------------------------------------------------------
int BinarySearch(int arr[], int size, int key)
{
    // First index of the array.
    int start = 0;

    // Last index of the array.
    int end = size - 1;

    /*
        Find the middle index.

        Formula

        mid = start + (end - start) / 2

        This formula prevents integer overflow.
    */
    int mid = start + (end - start) / 2;

    /*
        Continue searching until

        start becomes greater than end.
    */
    while (start <= end)
    {
        /*
            If the middle element
            is equal to the key,

            return its index.
        */
        if (arr[mid] == key)
        {
            return mid;
        }

        /*
            If the key is greater than
            the middle element,

            the required element
            must be on the RIGHT side.

            Ignore the left half.
        */
        if (key > arr[mid])
        {
            start = mid + 1;
        }

        /*
            Otherwise,

            the key is smaller than
            the middle element.

            Search in the LEFT half.
        */
        else
        {
            end = mid - 1;
        }

        /*
            Calculate the new middle
            after updating start or end.
        */
        mid = start + (end - start) / 2;
    }

    /*
        If the loop finishes,

        the element does not exist
        in the array.
    */
    return -1;
}


//----------------------------------------------------------
// Main Function
//
// Program execution starts here.
//----------------------------------------------------------
int main()
{
    /*
        Even Array

        Index

        0 -> 2
        1 -> 3
        2 -> 41
        3 -> 44
        4 -> 56
        5 -> 77
    */
    int even[6] = {2, 3, 41, 44, 56, 77};

    /*
        Odd Array

        Index

        0 -> 21
        1 -> 33
        2 -> 45
        3 -> 67
        4 -> 87
    */
    int odd[5] = {21, 33, 45, 67, 87};

    /*
        Search 56 in the even array.

        Returned index
        will be stored in evenindex.
    */
    int evenindex = BinarySearch(even, 6, 56);

    cout << "Index of 56 is: " << evenindex << endl;

    /*
        Search 45 in the odd array.

        Returned index
        will be stored in oddindex.
    */
    int oddindex = BinarySearch(odd, 5, 45);

    cout << "Index of 45 is: " << oddindex << endl;

    return 0;
}
