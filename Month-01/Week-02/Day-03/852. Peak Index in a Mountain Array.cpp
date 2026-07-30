class Solution {
public:

    // Function to find the peak index
    // in a Mountain Array.
    int peakIndexInMountainArray(vector<int>& arr) {

        // Starting index of the array.
        int start = 0;

        // Ending index of the array.
        int end = arr.size() - 1;

        // Calculate the middle index.
        int mid = start + (end - start) / 2;

        /*
            Continue searching until
            start and end become equal.

            The peak element will
            always lie between
            start and end.
        */
        while (start < end) {

            /*
                Compare the middle element
                with its next element.
            */

            if (arr[mid] < arr[mid + 1]) {

                /*
                    We are on the increasing
                    slope of the mountain.

                    Example

                    1 3 5 7 9 8 6

                          ^
                         mid

                    Since the next element
                    is greater,

                    the peak lies on the
                    RIGHT side.

                    Ignore the left half.
                */
                start = mid + 1;
            }
            else {

                /*
                    We are on the decreasing
                    slope or exactly at the peak.

                    Example

                    1 3 5 9 8 6 2

                          ^
                         mid

                    The peak could be
                    the current element
                    or somewhere on the LEFT.

                    Therefore,

                    move end to mid.
                */
                end = mid;
            }

            /*
                Recalculate the middle index
                after updating start or end.
            */
            mid = start + (end - start) / 2;
        }

        /*
            When the loop ends,

            start == end

            Both point to the peak index.
        */
        return start;
    }
};
