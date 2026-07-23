#include <iostream>
using namespace std;

/*
==========================================================
        Program: Linear Search in an Array
==========================================================

Linear Search:
Checks each element one by one until
the required element (key) is found.

If found:
    return true

Otherwise:
    return false
*/


//----------------------------------------------------------
// Function: search()
// Purpose:
//      Search an element in the array.
//
// Parameters:
//
// arr[] -> Integer array.
// size  -> Total number of elements.
// key   -> Element to search.
//
// Return:
//
// true  -> Element found.
// false -> Element not found.
//----------------------------------------------------------
bool search(int arr[], int size, int key)
{
    /*
        Traverse the complete array.

        Start from index 0
        and continue until index (size-1).
    */
    for (int i = 0; i < size; i++)
    {
        /*
            Compare the current element
            with the key.
        */
        if (arr[i] == key)
        {
            /*
                If both are equal,

                the element is found.

                Return true immediately.

                No need to check
                the remaining elements.
            */
            return true;
        }
    }

    /*
        If the loop finishes,

        it means the key was not found
        in any element.

        Therefore return false.
    */
    return false;
}


//----------------------------------------------------------
// Main Function
//
// Program execution starts here.
//----------------------------------------------------------
int main()
{
    /*
        Declare and initialize an array.

        Memory

        Index

        0 -> 9
        1 -> 7
        2 -> 5
        3 -> 2
        4 -> -8
    */
    int arr[5] = {9, 7, 5, 2, -8};

    cout << "Enter the element to search for: ";

    // Variable to store the element to search.
    int key;
    cin >> key;

    /*
        Function Call

        search(arr, 5, key)

        arr passes the address
        of the first element.

        5 is the total number
        of elements.

        key is the value
        entered by the user.
    */
    bool found = search(arr, 5, key);

    /*
        If found is true,

        print Key is Present.

        Otherwise,

        print Key is Absent.
    */
    if (found)
    {
        cout << "Key is Present." << endl;
    }
    else
    {
        cout << "Key is Absent." << endl;
    }

    return 0;
}
