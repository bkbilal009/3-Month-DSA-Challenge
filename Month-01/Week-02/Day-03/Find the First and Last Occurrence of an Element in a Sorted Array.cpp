#include<iostream>
using namespace std;

//----------------------------------------------------------
// Function: firstOcc()
// Purpose:
//      Find the first occurrence of the key
//      using Binary Search.
//----------------------------------------------------------
int firstOcc(int arr[], int n, int key)
{
    // Starting index.
    int start = 0;

    // Ending index.
    int end = n - 1;

    // Store the answer.
    // If the key is not found,
    // -1 will be returned.
    int ans = -1;

    // Calculate the middle index.
    int mid = start + (end - start) / 2;

    // Continue searching until
    // start becomes greater than end.
    while (start <= end)
    {
        // If the key is found.
        if (arr[mid] == key)
        {
            // Store the current index.
            ans = mid;

            /*
                Continue searching
                on the LEFT side
                because we need the
                FIRST occurrence.
            */
            end = mid - 1;
        }

        // If the key is greater,
        // search in the right half.
        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        // If the key is smaller,
        // search in the left half.
        else
        {
            end = mid - 1;
        }

        // Update the middle index.
        mid = start + (end - start) / 2;
    }

    // Return the first occurrence.
    return ans;
}


//----------------------------------------------------------
// Function: lastOcc()
// Purpose:
//      Find the last occurrence of the key
//      using Binary Search.
//----------------------------------------------------------
int lastOcc(int arr[], int n, int key)
{
    // Starting index.
    int start = 0;

    // Ending index.
    int end = n - 1;

    // Store the answer.
    int ans = -1;

    // Calculate the middle index.
    int mid = start + (end - start) / 2;

    // Continue searching until
    // start becomes greater than end.
    while (start <= end)
    {
        // If the key is found.
        if (arr[mid] == key)
        {
            // Store the current index.
            ans = mid;

            /*
                Continue searching
                on the RIGHT side
                because we need the
                LAST occurrence.
            */
            start = mid + 1;
        }

        // If the key is greater,
        // search in the right half.
        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        // If the key is smaller,
        // search in the left half.
        else
        {
            end = mid - 1;
        }

        // Update the middle index.
        mid = start + (end - start) / 2;
    }

    // Return the last occurrence.
    return ans;
}


//----------------------------------------------------------
// Main Function
//----------------------------------------------------------
int main()
{
    // Sorted array.
    int even[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};

    // Print the first occurrence.
    cout << "First occurrence of 3 is at index: "
         << firstOcc(even, 11, 3) << endl;

    // Print the last occurrence.
    cout << "Last occurrence of 3 is at index: "
         << lastOcc(even, 11, 3) << endl;

    return 0;
}
