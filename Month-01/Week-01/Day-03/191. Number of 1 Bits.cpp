class Solution {
public:
    int hammingWeight(int n) {

        // Variable to store the number of 1 bits.
        int count = 0;

        // Continue until all bits have been checked.
        while (n != 0) {

            // Check the last (rightmost) bit.
            // (n & 1) returns:
            // 1 if the last bit is 1
            // 0 if the last bit is 0
            if (n & 1) {
                // If the last bit is 1,
                // increase the count.
                count++;
            }

            // Shift all bits one position to the right.
            // This removes the last bit that we just checked.
            //
            // Example:
            // n = 13 (1101)
            // After shift:
            // n = 6 (0110)
            n = n >> 1;
        }

        // Return the total number of 1 bits.
        return count;
    }
};
