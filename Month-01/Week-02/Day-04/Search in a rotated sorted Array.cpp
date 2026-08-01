#include<iostream>
using namespace std;

//----------------------------------------------------------
// Function: BinarySearch()
// Purpose:
//      Search the key in the given range
//      using Binary Search.
//----------------------------------------------------------
int BinarySearch(int arr[], int start, int end, int key)
{
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        // Key found.
        if (arr[mid] == key)
        {
            return mid;
        }

        // Search in the right half.
        if (key > arr[mid])
        {
            start = mid + 1;
        }

        // Search in the left half.
        else
        {
            end = mid - 1;
        }

        // Update the middle index.
        mid = start + (end - start) / 2;
    }

    // Key not found.
    return -1;
}


//----------------------------------------------------------
// Function: getPivot()
// Purpose:
//      Find the index of the smallest element
//      in a rotated sorted array.
//----------------------------------------------------------
int getPivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while (start < end)
    {
        // Pivot lies on the right side.
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }

        // Pivot lies on the left side
        // (or mid itself is the pivot).
        else
        {
            end = mid;
        }

        // Update the middle index.
        mid = start + (end - start) / 2;
    }

    // Pivot index.
    return start;
}


//----------------------------------------------------------
// Function: findPosition()
// Purpose:
//      Find the position of the key
//      in a rotated sorted array.
//----------------------------------------------------------
int findPosition(int arr[], int n, int key)
{
    // Find the pivot index.
    int pivot = getPivot(arr, n);

    /*
        If the key lies between
        pivot and the last element,
        search in the right half.
    */
    if (key >= arr[pivot] && key <= arr[n - 1])
    {
        return BinarySearch(arr, pivot, n - 1, key);
    }

    /*
        Otherwise,
        search in the left half.
    */
    else
    {
        return BinarySearch(arr, 0, pivot - 1, key);
    }
}


//----------------------------------------------------------
// Main Function
//----------------------------------------------------------
int main()
{
    // Rotated Sorted Array.
    int arr[7] = {7, 9, 10, 1, 2, 3, 5};

    int key;

    cout << "Enter the key: ";
    cin >> key;

    int ans = findPosition(arr, 7, key);

    if (ans == -1)
    {
        cout << "Element not found." << endl;
    }
    else
    {
        cout << "Element found at index: " << ans << endl;
    }

    return 0;
}
