#include <iostream>
using namespace std;

/*
==========================================================
        Passing an Array to a Function
==========================================================

Important Concept:

Unlike normal variables, arrays are NOT copied when they
are passed to a function.

Instead, the ADDRESS of the first element is passed.

This means:

Any change made inside the function
will also be visible inside main().
*/


//----------------------------------------------------------
// Function: update()
// Purpose:
//      Update the first element of the array
//      and print the array.
//
// Parameters:
//
// arr[] -> Address of the first element of the array.
// n     -> Size of the array.
//----------------------------------------------------------
void update(int arr[], int n)
{
    cout << "Inside the Function" << endl;

    /*
        Memory before update

        Index

        0 -> 1
        1 -> 2
        2 -> 3
    */

    // Change the first element.
    arr[0] = 123;

    /*
        Now memory becomes

        Index

        0 -> 123
        1 -> 2
        2 -> 3

        Since arrays are passed by address,
        this change is made in the ORIGINAL array.
    */

    cout << "Array inside Function: ";

    // Print all elements.
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Going back to the Main Function" << endl;
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

        0 -> 1
        1 -> 2
        2 -> 3
    */
    int arr[3] = {1, 2, 3};

    /*
        Function Call

        update(arr, 3);

        Here,

        arr

        actually passes

        &arr[0]

        (Address of the first element)

        No copy of the array is created.
    */
    update(arr, 3);

    /*
        After returning from update(),

        the array has already changed.

        Memory

        Index

        0 -> 123
        1 -> 2
        2 -> 3
    */

    cout << "Printing in Main Function" << endl;

    // Print the updated array.
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
