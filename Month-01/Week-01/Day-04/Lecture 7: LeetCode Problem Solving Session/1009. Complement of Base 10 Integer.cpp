class Solution {
public:
    int bitwiseComplement(int n) {

        // Store the original value of n.
        // We use another variable because during mask creation
        // we will keep shifting m to the right.
        // We don't want to lose the original value of n.
        int m = n;

        // This variable will store a mask consisting of all 1's.
        //
        // Example:
        // If n = 5 (101)
        // Then mask will become 111.
        int mask = 0;

        // -----------------------------
        // Special Case
        // -----------------------------
        //
        // If n = 0
        //
        // Binary:
        // 0
        //
        // Complement:
        // 1
        //
        // Therefore return 1 immediately.
        if (n == 0) {
            return 1;
        }

        // ------------------------------------
        // Create a mask having all bits = 1
        // ------------------------------------
        //
        // Example:
        //
        // n = 5
        //
        // Binary:
        // 101
        //
        // Number of bits = 3
        //
        // Required mask:
        // 111
        //
        // We keep running until every bit
        // of m has been processed.
        while (m != 0) {

            // Shift mask one position to the left.
            //
            // Example:
            //
            // mask = 000
            //
            // After left shift:
            //
            // 000 << 1 = 000
            mask = mask << 1;

            // Set the last bit to 1.
            //
            // Why OR with 1?
            //
            // Because:
            //
            // 000 | 001 = 001
            // 010 | 001 = 011
            // 110 | 001 = 111
            //
            // This gradually creates a mask
            // made entirely of 1's.
            mask = mask | 1;

            // Remove the last bit of m.
            //
            // Example:
            //
            // 101 >> 1 = 10
            // 10  >> 1 = 1
            // 1   >> 1 = 0
            //
            // When m becomes 0,
            // the loop ends.
            m = m >> 1;
        }

        // ------------------------------------
        // Find the complement
        // ------------------------------------
        //
        // ~n flips every bit.
        //
        // Example:
        //
        // n = 5
        //
        // Binary:
        // 00000101
        //
        // ~n
        //
        // 11111010
        //
        // But we only need the bits
        // that belong to the original number.
        //
        // mask = 00000111
        //
        // Therefore:
        //
        // 11111010
        // &
        // 00000111
        // ----------
        // 00000010
        //
        // Final answer = 2
        int ans = (~n) & mask;

        // Return the complement.
        return ans;
    }
};
