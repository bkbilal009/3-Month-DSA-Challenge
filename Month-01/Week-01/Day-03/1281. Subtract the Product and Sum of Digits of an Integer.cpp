class Solution {
public:
    int subtractProductAndSum(int n) {

        // Store the product of all digits.
        // Start with 1 because multiplying by 1 does not change the result.
        int prod = 1;

        // Store the sum of all digits.
        // Start with 0 because adding starts from zero.
        int sum = 0;

        // Continue until all digits have been processed.
        while (n != 0) {

            // Get the last digit of the number.
            // Example: n = 234
            // digit = 234 % 10 = 4
            int digit = n % 10;

            // Multiply the current digit with the product.
            // Example: prod = 1 * 4 = 4
            prod = prod * digit;

            // Add the current digit to the sum.
            // Example: sum = 0 + 4 = 4
            sum = sum + digit;

            // Remove the last digit from the number.
            // Example: 234 / 10 = 23
            n = n / 10;
        }

        // Find the difference between
        // the product of digits and the sum of digits.
        int answer = prod - sum;

        // Return the final result.
        return answer;
    }
};
