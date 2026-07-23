#include<iostream>
using namespace std;

// ----------------------------------------------------
// Function: printArray()
// Purpose : Print all elements of an array
// Parameters:
//      arr[] -> Array to print
//      size  -> Number of elements in the array
// ----------------------------------------------------
void printArray(int arr[], int size)
{
    cout << "Printing the array:" << endl;

    // Traverse every element of the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Printing Done" << endl << endl;
}

int main()
{
    // ------------------------------------------------
    // Array 1: Only declared.
    // Values are uninitialized (garbage values).
    // ------------------------------------------------
    int a[15];

    cout << "Value at index 14 (Garbage Value): " << a[14] << endl << endl;

    // ------------------------------------------------
    // Array 2: Initialized with values.
    // ------------------------------------------------
    int second[4] = {3, 5, 7, 8};

    cout << "Second array:" << endl;
    printArray(second, 4);

    // Access a single element
    cout << "Value at index 1: " << second[1] << endl << endl;

    // ------------------------------------------------
    // Array 3: All elements become 0.
    // ------------------------------------------------
    int third[5] = {0};

    cout << "Third array:" << endl;
    printArray(third, 5);

    // ------------------------------------------------
    // Array 4:
    // Only first element is 1.
    // Remaining elements become 0.
    // ------------------------------------------------
    int fourth[10] = {1};

    cout << "Fourth array:" << endl;
    printArray(fourth, 10);

    cout << "Everything is fine." << endl;

    return 0;
}
