#include<iostream>
using namespace std;

    void printCounting(int n){
        for (int i = 1; i <= n; i++){
            cout << i << " ";
        }
    }


int main()
{

    int n;
    cin >> n ;

    printCounting(n);
    return 0;

    return 0;
}


// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++





#include <iostream>
using namespace std;

/*
    Program: Print Counting from 1 to n

    Example:
    Input:
        5

    Output:
        1 2 3 4 5

    This program demonstrates the use of a void function.
*/


//----------------------------------------------------------
// Function: printCounting()
// Purpose : Print numbers from 1 to n.
//
// Parameter:
//      n -> The last number to print.
//
// Return:
//      Nothing (void).
//
// Why void?
// Because this function only prints the numbers.
// It does not calculate or return any value.
//----------------------------------------------------------
void printCounting(int n)
{
    /*
        for loop structure:

        Initialization:
            int i = 1;
            Loop starts from 1.

        Condition:
            i <= n;
            Continue the loop while i is less than
            or equal to n.

        Update:
            i++;
            Increase i by 1 after every iteration.
    */
    for (int i = 1; i <= n; i++)
    {
        /*
            Print the current value of i.

            Example (n = 5)

            Iteration 1
            i = 1
            Output: 1

            Iteration 2
            i = 2
            Output: 2

            Iteration 3
            i = 3
            Output: 3

            Iteration 4
            i = 4
            Output: 4

            Iteration 5
            i = 5
            Output: 5

            After i becomes 6,
            the condition (6 <= 5) becomes false,
            so the loop stops.
        */
        cout << i << " ";
    }
}


//----------------------------------------------------------
// Main Function
// Program execution always starts from here.
//----------------------------------------------------------
int main()
{
    // Variable to store the user's input.
    int n;

    // Ask the user to enter the last number.
    cout << "Enter a number: ";
    cin >> n;

    /*
        Function Call

        Suppose the user enters:

            5

        Function call:

            printCounting(5);

        The value 5 is copied into the parameter n
        of the printCounting() function.

        The function prints:

            1 2 3 4 5

        After finishing, control returns to main().
    */
    printCounting(n);

    // Indicates that the program executed successfully.
    return 0;
}









// Program Starts
//       │
//       ▼
// main()
//       │
//       ▼
// Read input (n)
//       │
//       ▼
// printCounting(n)
//       │
//       ▼
// Loop starts (i = 1)
//       │
//       ▼
// Print 1
// Print 2
// Print 3
// ...
// Print n
//       │
//       ▼
// Loop ends
//       │
//       ▼
// Return to main()
//       │
//       ▼
// Program Ends
