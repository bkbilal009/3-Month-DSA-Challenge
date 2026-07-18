class Solution {
public:
    bool isPowerOfTwo(int n) {

        // Check every power of 2 from 2^0 to 2^30.
        //
        // Why only up to 30?
        //
        // Because the maximum value of a 32-bit signed integer is:
        //
        // INT_MAX = 2147483647
        //
        // 2^30 = 1073741824  ✅ (fits in int)
        // 2^31 = 2147483648  ❌ (greater than INT_MAX)
        //
        // Therefore, checking up to 30 is enough.
        for (int i = 0; i <= 30; i++) {

            // Calculate 2 raised to the power i.
            //
            // Examples:
            //
            // i = 0 → 2^0 = 1
            // i = 1 → 2^1 = 2
            // i = 2 → 2^2 = 4
            // i = 3 → 2^3 = 8
            // i = 4 → 2^4 = 16
            int ans = pow(2, i);

            // Compare the calculated power of 2
            // with the given number.
            //
            // If they are equal,
            // n is a power of 2.
            if (ans == n) {
                return true;
            }
        }

        // If no power of 2 matches n,
        // then n is not a power of 2.
        return false;
    }
};
