#include <iostream>
using namespace std;

/*
==========================================================
        Program: Swap Alternate Elements of an Array
==========================================================

Swap Alternate means:

Swap every two adjacent elements.

Example:

Original Array

2 3 4 5 67 86

After Swapping

3 2 5 4 86 67

----------------------------------------------------------

Odd Size Example

Original

23 34 54 32 12

After Swapping

34 23 32 54 12

The last element remains unchanged because
it has no next element to swap with.
*/


//----------------------------------------------------------
// Function: printArray()
// Purpose:
//      Print all elements of the array.
//
// Parameters:
//
// arr[] -> Integer array.
// n     -> Total number of elements.
//
// Return:
//      Nothing (void).
//----------------------------------------------------------
void printArray(int arr[], int n)
{
    /*
        Start from index 0
        and print every element
        until the last index.
    */
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}


//----------------------------------------------------------
// Function: swapAlternate()
// Purpose:
//      Swap alternate elements.
//
// Parameters:
//
// arr[] -> Integer array.
// size  -> Total number of elements.
//
// Return:
//      Nothing (void).
//----------------------------------------------------------
void swapAlternate(int arr[], int size)
{
    /*
        i = 0

        Increase i by 2 every iteration.

        Example

        i = 0

        i = 2

        i = 4

        i = 6

        We move two indexes at a time because
        one swap handles two elements.
    */
    for (int i = 0; i < size; i += 2)
    {
        /*
            Before swapping,

            check whether the next index exists.

            Example

            size = 5

            Valid indexes

            0 1 2 3 4

            When i = 4

            i + 1 = 5

            Index 5 does not exist.

            Therefore,

            don't swap.
        */
        if (i + 1 < size)
        {
            /*
                Swap current element
                with the next element.

                Example

                i = 0

                arr[0] ↔ arr[1]

                i = 2

                arr[2] ↔ arr[3]

                i = 4

                No swap because
                next element doesn't exist
                in an odd-sized array.
            */
            swap(arr[i], arr[i + 1]);
        }
    }
}


//----------------------------------------------------------
// Main Function
//
// Program execution starts here.
//----------------------------------------------------------
int main()
{
    /*
        Even Size Array

        Before

        2 3 4 5 67 86
    */
    int even[6] = {2, 3, 4, 5, 67, 86};

    /*
        Odd Size Array

        Before

        23 34 54 32 12
    */
    int odd[5] = {23, 34, 54, 32, 12};

    /*
        Function Call

        Swap alternate elements
        of the even array.

        Swaps

        2 ↔ 3

        4 ↔ 5

        67 ↔ 86
    */
    swapAlternate(even, 6);

    cout << "Even Array After Swapping:" << endl;

    printArray(even, 6);

    cout << endl;

    /*
        Function Call

        Swap alternate elements
        of the odd array.

        Swaps

        23 ↔ 34

        54 ↔ 32

        12 remains unchanged.
    */
    swapAlternate(odd, 5);

    cout << "Odd Array After Swapping:" << endl;

    printArray(odd, 5);

    return 0;
}
