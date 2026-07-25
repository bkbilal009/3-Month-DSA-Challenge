#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // First sorted array.
    vector<int> arr1 = {1, 2, 2, 3, 4};

    // Second sorted array.
    vector<int> arr2 = {2, 2, 3, 5};

    // Store common elements.
    vector<int> ans;

    // Size of both arrays.
    int n = arr1.size();
    int m = arr2.size();

    // Two pointers.
    int i = 0;
    int j = 0;

    // Traverse both arrays.
    while (i < n && j < m)
    {
        // If elements are equal,
        // store them in the answer.
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }

        // If arr1 element is smaller,
        // move i.
        else if (arr1[i] < arr2[j])
        {
            i++;
        }

        // Otherwise move j.
        else
        {
            j++;
        }
    }

    // Print the intersection.
    for (int k = 0; k < ans.size(); k++)
    {
        cout << ans[k] << " ";
    }

    return 0;
}
