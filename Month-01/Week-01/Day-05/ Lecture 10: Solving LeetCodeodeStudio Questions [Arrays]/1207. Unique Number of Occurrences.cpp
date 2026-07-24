#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution
{
public:

    bool uniqueOccurrences(vector<int>& arr)
    {
        /*
            HashMap

            Key   -> Number

            Value -> Frequency
        */
        unordered_map<int, int> freq;

        /*
            Count frequency
        */
        for (int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }

        /*
            HashSet

            Stores frequencies.

            Duplicate frequencies
            are not allowed.
        */
        unordered_set<int> seen;

        /*
            Traverse every key-value pair
            inside the HashMap.
        */
        for (auto it : freq)
        {
            /*
                it.first

                Number

                Example

                1
            */

            /*
                it.second

                Frequency

                Example

                3
            */

            /*
                If this frequency
                already exists,
                answer is false.
            */
            if (seen.count(it.second))
            {
                return false;
            }

            /*
                Otherwise store it.
            */
            seen.insert(it.second);
        }

        /*
            All frequencies are unique.
        */
        return true;
    }
};
