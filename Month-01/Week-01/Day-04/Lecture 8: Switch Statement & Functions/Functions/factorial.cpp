#include <iostream>
using namespace std;

/*
    Program: Calculate nCr (Combination)

    Formula:
        nCr = n! / ( r! * (n-r)! )

    Example:
        5C2 = 5! / (2! * 3!)
             = 120 / (2 * 6)
             = 10
*/


//----------------------------------------------------------
// Function: factorial()
// Purpose : Calculate the factorial of a number.
//
// Example:
//      factorial(5)
//      = 5 * 4 * 3 * 2 * 1
//      = 120
//
// Parameter:
//      n -> Number whose factorial we want to calculate.
//
// Return:
//      Returns the factorial of n.
//----------------------------------------------------------
int factorial(int n)
{
    // Variable to store the running multiplication result.
    // We initialize it with 1 because:
    // 1 is the identity element of multiplication.
    // If we started with 0, the answer would always become 0.
    int fact = 1;

    // Loop starts from 1 and runs until n.
    for (int i = 1; i <= n; i++)
    {
        /*
            Each iteration multiplies the current value of
            fact with i.

            Example (n = 5)

            Initially:
            fact = 1

            i = 1
            fact = 1 * 1 = 1

            i = 2
            fact = 1 * 2 = 2

            i = 3
            fact = 2 * 3 = 6

            i = 4
            fact = 6 * 4 = 24

            i = 5
            fact = 24 * 5 = 120
        */
        fact = fact * i;
    }

    // Return the final factorial value to the function caller.
    return fact;
}


//----------------------------------------------------------
// Function: nCr()
// Purpose : Calculate Combination using formula
//
// Formula:
//      nCr = n! / ( r! * (n-r)! )
//
// Parameters:
//      n -> Total number of objects.
//      r -> Number of objects to choose.
//
// Return:
//      Returns the value of nCr.
//----------------------------------------------------------
int nCr(int n, int r)
{
    // Calculate n!
    // This calls the factorial() function.
    int num = factorial(n);

    /*
        Calculate denominator:

        denominator = r! * (n-r)!

        Two separate calls to factorial() are made.

        Example:
        n = 5
        r = 2

        denominator
        = factorial(2) * factorial(3)
        = 2 * 6
        = 12
    */
    int denom = factorial(r) * factorial(n - r);

    /*
        Final Answer

        Example:

        numerator = 120
        denominator = 12

        answer = 120 / 12
               = 10
    */
    return num / denom;
}


//----------------------------------------------------------
// Main Function
// Program execution always starts from here.
//----------------------------------------------------------
int main()
{
    // Variables to store user input.
    int n, r;

    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter value of r: ";
    cin >> r;

    /*
        Call nCr() function.

        Example:

        User enters:
        n = 5
        r = 2

        Function call:

        nCr(5,2)

        Inside nCr():

            factorial(5) ----> returns 120

            factorial(2) ----> returns 2

            factorial(3) ----> returns 6

            answer = 120 / (2 * 6)
                   = 10

        nCr() returns 10 to main().
    */
    cout << "\nAnswer is: " << nCr(n, r) << endl;

    return 0;
}
