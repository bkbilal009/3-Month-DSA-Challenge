class Solution {
public:
    int reverse(int x) {

        // This variable stores the reversed number.
        // Initially, the reversed number is 0.
        int ans = 0;

        // Continue the loop until all digits of x are processed.
        //
        // Example:
        // x = 123
        // Iteration 1 -> x = 123
        // Iteration 2 -> x = 12
        // Iteration 3 -> x = 1
        // Iteration 4 -> x = 0 (Loop ends)
        while (x != 0) {

            // Extract the last digit of x.
            //
            // Why do we use % 10?
            // Because the remainder after dividing by 10
            // is always the last digit.
            //
            // Examples:
            // 123 % 10 = 3
            // 456 % 10 = 6
            // -987 % 10 = -7
            int digit = x % 10;

            // Before adding the new digit,
            // check whether multiplying ans by 10
            // will cause integer overflow.
            //
            // int range:
            // INT_MAX = 2147483647
            // INT_MIN = -2147483648
            //
            // Why is this check necessary?
            //
            // Suppose:
            // ans = 214748365
            //
            // If we do:
            // ans = ans * 10
            //
            // It becomes:
            // 2147483650
            //
            // This value is larger than INT_MAX,
            // so overflow occurs.
            //
            // Similarly,
            // if ans becomes smaller than INT_MIN,
            // underflow occurs.
            //
            // Therefore, we return 0 as required
            // by the problem statement.
            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
                return 0;
            }

            // Build the reversed number.
            //
            // First shift the previous digits
            // one position to the left.
            //
            // ans * 10
            //
            // Then add the new last digit.
            //
            // Examples:
            //
            // ans = 0
            // digit = 3
            // ans = (0 * 10) + 3 = 3
            //
            // ans = 3
            // digit = 2
            // ans = (3 * 10) + 2 = 32
            //
            // ans = 32
            // digit = 1
            // ans = (32 * 10) + 1 = 321
            ans = (ans * 10) + digit;

            // Remove the last digit from x.
            //
            // Why divide by 10?
            //
            // Integer division removes
            // the last digit.
            //
            // Examples:
            //
            // 123 / 10 = 12
            // 12 / 10 = 1
            // 1 / 10 = 0
            //
            // Negative example:
            //
            // -123 / 10 = -12
            x = x / 10;
        }

        // Return the final reversed number.
        return ans;
    }
};
