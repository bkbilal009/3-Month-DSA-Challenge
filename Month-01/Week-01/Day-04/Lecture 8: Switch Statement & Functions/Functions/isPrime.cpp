#include <iostream>
using namespace std;

/*
    Program: Check Whether a Number is Prime or Not

    Prime Number:
        A number that has exactly two factors:
        1 and itself.

    Examples:
        2, 3, 5, 7, 11, 13 ...

    Not Prime:
        A number that has more than two factors.

    Examples:
        4, 6, 8, 9, 10 ...
*/


//----------------------------------------------------------
// Function: isPrime()
// Purpose : Check whether a given number is prime.
//
// Parameter:
//      n -> Number to check.
//
// Return:
//      true  (1) -> Number is Prime.
//      false (0) -> Number is Not Prime.
//----------------------------------------------------------
bool isPrime(int n)
{
    /*
        Prime numbers are greater than 1.

        If n is 0 or 1,
        it is NOT a prime number.
    */
    if (n <= 1)
    {
        return false;
    }

    /*
        Loop starts from 2 because:

        Every number is divisible by 1,
        so checking with 1 is unnecessary.

        The loop checks every number from
        2 up to n-1.

        If any number divides n completely,
        then n is NOT prime.
    */
    for (int i = 2; i < n; i++)
    {
        /*
            % (Modulus Operator)

            It returns the remainder.

            Example:

            10 % 2 = 0
            10 % 3 = 1
            10 % 4 = 2
        */

        // If remainder is 0,
        // it means i is a factor of n.
        if (n % i == 0)
        {
            /*
                Example:

                n = 10

                i = 2

                10 % 2 = 0

                Therefore,
                10 is divisible by 2.

                So, 10 is NOT Prime.
            */

            return false;
        }
    }

    /*
        If the loop finishes without finding
        any factor,

        then n has only two factors:
        1 and itself.

        Therefore,
        n is Prime.
    */
    return true;
}


//----------------------------------------------------------
// Main Function
// Program execution always starts from here.
//----------------------------------------------------------
int main()
{
    // Variable to store the user's input.
    int n;

    cout << "Enter a Number: ";
    cin >> n;

    /*
        Function Call

        Example:

        User enters:

            7

        Function call:

            isPrime(7)

        The function checks whether
        7 is divisible by:

        2
        3
        4
        5
        6

        Since none divide 7 completely,
        the function returns true.

        Output:
            Number is Prime
    */
    if (isPrime(n))
    {
        cout << "Number is Prime." << endl;
    }
    else
    {
        cout << "Number is Not Prime." << endl;
    }

    // Program executed successfully.
    return 0;
}










// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++ (Dry Run) +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



// main()

// ↓

// n = 7

// ↓

// isPrime(7)

// ↓

// i = 2
// 7 % 2 = 1

// ↓

// i = 3
// 7 % 3 = 1

// ↓

// i = 4
// 7 % 4 = 3

// ↓

// i = 5
// 7 % 5 = 2

// ↓

// i = 6
// 7 % 6 = 1

// ↓

// Loop Ends

// ↓

// return true

// ↓

// Output:
// Number is Prime.
