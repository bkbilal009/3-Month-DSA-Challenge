#include <iostream>
using namespace std;

/*
==========================================================
        Program: Find Sum of All Elements of an Array
==========================================================

Example:

Input:
10 20 30 40 50

Output:
Sum of all values is: 150
*/


//----------------------------------------------------------
// Function: all()
// Purpose:
//      Calculate the sum of all elements of an array.
//
// Parameters:
//
// arr[] -> Integer array.
// n     -> Total number of elements.
//
// Return:
//      Returns the total sum.
//----------------------------------------------------------
int all(int arr[], int n)
{
    // Variable to store the sum.
    // Initially sum is 0 because no elements
    // have been added yet.
    int sum = 0;

    /*
        Traverse the complete array.

        i starts from 0.

        Continue until the last index (n-1).
    */
    for (int i = 0; i < n; i++)
    {
        /*
            Add current element into sum.

            Example:

            Array

            10 20 30 40 50

            Iteration 1

            sum = 0 + 10 = 10

            Iteration 2

            sum = 10 + 20 = 30

            Iteration 3

            sum = 30 + 30 = 60

            Iteration 4

            sum = 60 + 40 = 100

            Iteration 5

            sum = 100 + 50 = 150
        */
        sum = sum + arr[i];
    }

    /*
        Return the final sum to main().
    */
    return sum;
}


//----------------------------------------------------------
// Main Function
//
// Program execution starts here.
//----------------------------------------------------------
int main()
{
    // Declare an array of size 5.
    int arr[5];

    cout << "Enter 5 Elements: ";

    /*
        Take input from the user.

        Example:

        10
        20
        30
        40
        50

        Memory

        Index

        0 -> 10
        1 -> 20
        2 -> 30
        3 -> 40
        4 -> 50
    */
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    /*
        Function Call

        all(arr, 5)

        arr passes the address of the
        first element of the array.

        The function calculates the sum
        and returns it.

        If the returned value is 150,

        this statement becomes

        cout << 150;
    */
    cout << "Sum of all values is: "
         << all(arr, 5) << endl;

    return 0;
}
