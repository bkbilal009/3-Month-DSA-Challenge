class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        // Store the size of the array.
        int n = nums.size();

        // Store all duplicate elements.
        vector<int> result;

        /*
            Traverse the complete array.
        */
        for (int i = 0; i < n; i++) {

            /*
                Get the absolute value because
                some elements may already be
                negative after marking.
            */
            int num = abs(nums[i]);

            /*
                Convert the number into
                its corresponding index.

                Example:

                Number = 4

                Index = 3
            */
            int idx = num - 1;

            /*
                If the value at idx is already
                negative, it means this number
                has been visited before.

                Therefore, it is a duplicate.
            */
            if (nums[idx] < 0) {
                result.push_back(num);
            }
            else {

                /*
                    Mark this number as visited
                    by making its corresponding
                    index negative.
                */
                nums[idx] = -nums[idx];
            }
        }

        // Return all duplicate elements.
        return result;
    }
};
