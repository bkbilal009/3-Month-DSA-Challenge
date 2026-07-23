// Your logic is **reversed**.

// You accidentally wrote:

// * `getMax()` → finds the **minimum** value.
// * `getMin()` → finds the **maximum** value.

// Also, you should use `INT_MIN` and `INT_MAX` instead of `INT64_MIN` and `INT64_MAX` for an `int` array.

// ---

// ## Correct Code with Deep Comments

// ```cpp
#include <iostream>
#include <climits>      // Required for INT_MIN and INT_MAX
using namespace std;

/*
==========================================================
            Find Maximum and Minimum in an Array
==========================================================

This program performs the following steps:

1. Takes the size of the array.
2. Takes array elements from the user.
3. Finds the maximum value.
4. Finds the minimum value.
5. Prints both values.
*/


//----------------------------------------------------------
// Function : getMax()
// Purpose  : Find the largest element in the array.
//
// Parameters:
//
// num[] -> Integer array.
// n     -> Number of elements.
//
// Return:
//
// Returns the largest value present in the array.
//----------------------------------------------------------
int getMax(int num[], int n)
{
    /*
        Initially assume the maximum value
        is the smallest possible integer.

        INT_MIN

        = -2147483648

        Any integer entered by the user
        will be greater than or equal to this value.
    */
    int max = INT_MIN;

    /*
        Traverse every element of the array.
    */
    for (int i = 0; i < n; i++)
    {
        /*
            Compare current element with max.

            If current element is greater,
            update max.

            Example

            Array

            5 12 3 20 7
        */

        if (num[i] > max)
        {
            /*
                Example

                max = 12

                Current element = 20

                Since

                20 > 12

                Update max.

                max becomes 20.
            */
            max = num[i];
        }
    }

    /*
        Return the largest value.
    */
    return max;
}


//----------------------------------------------------------
// Function : getMin()
// Purpose  : Find the smallest element.
//
// Parameters:
//
// num[] -> Integer array.
// n     -> Number of elements.
//
// Return:
//
// Returns the smallest value.
//----------------------------------------------------------
int getMin(int num[], int n)
{
    /*
        Initially assume minimum is
        the largest possible integer.

        INT_MAX

        = 2147483647

        Any entered number will be
        smaller than or equal to this.
    */
    int min = INT_MAX;

    /*
        Visit every element.
    */
    for (int i = 0; i < n; i++)
    {
        /*
            Compare current element
            with minimum.

            If current element is smaller,
            update minimum.
        */
        if (num[i] < min)
        {
            /*
                Example

                min = 15

                Current element = 4

                Since

                4 < 15

                Update minimum.
            */
            min = num[i];
        }
    }

    /*
        Return the smallest value.
    */
    return min;
}


//----------------------------------------------------------
// Main Function
//
// Program execution starts here.
//----------------------------------------------------------
int main()
{
    // Variable to store the number of elements.
    int size;

    cout << "Enter Size of Array: ";
    cin >> size;

    /*
        Declare an array that can store
        maximum 100 integers.
    */
    int num[100];

    /*
    ==========================================================
                    Taking Input
    ==========================================================

    Example

    size = 5

    User enters

    12 4 9 25 6

    Memory

    Index

    0 -> 12

    1 -> 4

    2 -> 9

    3 -> 25

    4 -> 6
    */

    cout << "Enter " << size << " Elements:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    /*
    ==========================================================
                Function Calls
    ==========================================================

    getMax(num, size)

    num

    actually sends

    &num[0]

    (Address of first element)

    The function checks every element
    and returns the largest one.

    ------------------------------------

    getMin(num, size)

    Again the whole array is searched.

    The smallest value is returned.
    */

    cout << "\nMaximum Value is : "
         << getMax(num, size) << endl;

    cout << "Minimum Value is : "
         << getMin(num, size) << endl;

    return 0;
// }
// ```

// ---

// # Dry Run

// ### Input

// ```text
// 5
// 12 4 9 25 6
// ```

// ---

// ## getMax()

// Initially

// ```text
// max = INT_MIN
// ```

// | i | num[i] | max |
// | - | ------ | --- |
// | 0 | 12     | 12  |
// | 1 | 4      | 12  |
// | 2 | 9      | 12  |
// | 3 | 25     | 25  |
// | 4 | 6      | 25  |

// Returns

// ```text
// 25
// ```

// ---

// ## getMin()

// Initially

// ```text
// min = INT_MAX
// ```

// | i | num[i] | min |
// | - | ------ | --- |
// | 0 | 12     | 12  |
// | 1 | 4      | 4   |
// | 2 | 9      | 4   |
// | 3 | 25     | 4   |
// | 4 | 6      | 4   |

// Returns

// ```text
// 4
// ```

// ---

// ## Final Output

// ```text
// Maximum Value is : 25
// Minimum Value is : 4
// ```

// ### Mistakes in Your Original Code

// ```cpp
// // Wrong
// int max = INT64_MAX;
// if (num[i] < max)
//     max = num[i];
// ```

// This logic finds the **smallest** value, not the largest.

// It should be:

// ```cpp
// int max = INT_MIN;

// if (num[i] > max)
// {
//     max = num[i];
// }
// ```

// Similarly, your `getMin()` function was reversed:

// ```cpp
// // Wrong
// int min = INT64_MIN;

// if (num[i] > min)
// {
//     min = num[i];
// }
// ```

// It should be:

// ```cpp
// int min = INT_MAX;

// if (num[i] < min)
// {
//     min = num[i];
// }
// ```

// **Easy rule to remember:**

// * **Maximum:** Start with the **smallest possible value (`INT_MIN`)** and keep updating when you find a **larger** element.
// * **Minimum:** Start with the **largest possible value (`INT_MAX`)** and keep updating when you find a **smaller** element.
