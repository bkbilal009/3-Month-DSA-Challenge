// Your code has **one small mistake**:

// ```cpp
// printArray(ch);
// ```

// This gives an error because your function is:

// ```cpp
// void printArray(int arr[], int size)
// ```

// It only accepts an **integer array**, but `ch` is a **character array (`char[]`)**. Since `int[]` and `char[]` are different data types, the compiler reports an error.

// Below is your code with **very detailed comments**.

// ```cpp
#include <iostream>
using namespace std;

/*
==========================================================
                Arrays in C++
==========================================================

An array stores multiple values of the SAME data type
using a single variable name.

Example:

int marks[5];

Memory

Index :   0   1   2   3   4
Value :  ??  ??  ??  ??  ??

Each element has its own index.

The first index is always 0.
The last index is always size - 1.
*/


//----------------------------------------------------------
// Function : printArray()
// Purpose  : Print all elements of an integer array.
//
// Parameters:
//
// arr[]  -> Address of the first element of the array.
// size   -> Total number of elements.
//
// Return Type:
//
// void
//
// It only prints the array.
// It does not return anything.
//----------------------------------------------------------
void printArray(int arr[], int size)
{
    cout << "\nPrinting the array" << endl;

    /*
        Loop Explanation

        i = 0

        Start printing from the first element.

        i < size

        Continue until the last valid index.

        IMPORTANT

        Never write

            i <= size

        because the last valid index is

            size - 1

        Example

        size = 10

        Valid indexes

        0 1 2 3 4 5 6 7 8 9

        Index 10 DOES NOT EXIST.

        So use

            i < size
    */
    for (int i = 0; i < size; i++)
    {
        /*
            arr[i]

            Read the value stored
            at index i.
        */
        cout << arr[i] << " ";
    }

    cout << "\nPrinting DONE\n";
}

int main()
{
    /*
    ==========================================================
                    Array Declaration
    ==========================================================
    */

    // Array of 15 integers.
    int a[15];

    /*
        Memory

        Index

        0
        1
        2
        .
        .
        14

        Total elements = 15

        Since we didn't initialize it,

        values are garbage values.
    */

    /*
        Accessing element at index 14.

        This is the LAST valid index.

        Output is unpredictable because
        the array was never initialized.
    */
    cout << "Value at index 14 : " << a[14] << endl;

    /*
    ==========================================================
                    Array Initialization
    ==========================================================
    */

    int second[4] = {3, 5, 7, 8};

    /*
        Memory

        Index

        0 -> 3

        1 -> 5

        2 -> 7

        3 -> 8
    */

    cout << "Value at index 1 : " << second[1] << endl;

    /*
    ==========================================================
            Initialize every element with zero
    ==========================================================
    */

    int third[5] = {0};

    /*
        Memory

        Index

        0 -> 0

        1 -> 0

        2 -> 0

        3 -> 0

        4 -> 0

        Because only the first value is given as 0,
        C++ automatically initializes the remaining
        elements to 0.
    */

    cout << "Value at index 3 : " << third[3] << endl;

    /*
    ==========================================================
            Initialize first element only
    ==========================================================
    */

    int fourth[10] = {1};

    /*
        Memory

        Index

        0 -> 1

        1 -> 0

        2 -> 0

        3 -> 0

        4 -> 0

        5 -> 0

        6 -> 0

        7 -> 0

        8 -> 0

        9 -> 0

        Only the first element becomes 1.

        Remaining elements become 0.
    */

    cout << "\nPrinting fourth array\n";

    /*
        Function Call

        fourth

        actually passes the address
        of the first element.

        Equivalent to

        &fourth[0]
    */
    printArray(fourth, 10);

    /*
    ==========================================================
                    Finding Array Size
    ==========================================================
    */

    /*
        sizeof(fourth)

        Total bytes occupied by the array.

        Suppose

        int = 4 bytes

        fourth has 10 integers.

        Total bytes

        10 × 4

        = 40 bytes
    */

    /*
        sizeof(int)

        = 4 bytes
    */

    /*
        Therefore

        40 / 4

        = 10 elements
    */

    int fourthSize = sizeof(fourth) / sizeof(int);

    cout << "Size of fourth array : "
         << fourthSize << endl;

    /*
    ==========================================================
                    Character Array
    ==========================================================
    */

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};

    /*
        Memory

        Index

        0 -> a

        1 -> b

        2 -> c

        3 -> d

        4 -> e
    */

    cout << "Character at index 3 : "
         << ch[3] << endl;

    /*
    ==========================================================
                    Why this gives an error?
    ==========================================================

    printArray(ch);

    Error because

    printArray()

    accepts

        int arr[]

    but

    ch

    is

        char[]

    Data types are different.

    int[]  != char[]

    Compiler cannot convert

        char[]

    into

        int[]

    automatically.
    */

    cout << "\nEverything is fine." << endl;

    return 0;
// }
// ```

// ## ⚠️ One More Important Error in Your Original Code

// You wrote:

// ```cpp
// for (int i = 0; i <= size; i++)
// ```

// This is **incorrect**.

// If `size = 10`, then valid indexes are:

// ```text
// 0 1 2 3 4 5 6 7 8 9
// ```

// But `i <= size` makes `i` go to **10**, and `arr[10]` is **out of bounds**, which can cause undefined behavior.

// The correct loop is:

// ```cpp
// for (int i = 0; i < size; i++)
// ```

// This is the standard way to iterate through an array in C++.
