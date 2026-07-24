#include <iostream>
using namespace std;

int main()
{
    // Array in which every element appears twice
    // except one element.
    int arr[7] = {2, 3, 5, 4, 5, 3, 4};

    // Size of the array.
    int size = 7;

    // Variable to store the XOR result.
    int ans = 0;

    /*
        Traverse the complete array.

        Perform XOR with every element.

        XOR Rules

        0 ^ a = a

        a ^ a = 0

        Therefore, duplicate elements
        cancel each other.
    */
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    // Print the unique element.
    cout << "Unique Element is: " << ans << endl;

    return 0;
}
