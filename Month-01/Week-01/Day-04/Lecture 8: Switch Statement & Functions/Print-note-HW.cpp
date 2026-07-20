#include <iostream>
using namespace std;

int main() {

    // 'amount' stores the total amount entered by the user.
    // Example: If the user enters 370, then amount = 370.
    int amount;

    cout << "Enter your Amount: ";
    cin >> amount;

    // We are using switch statement because it is required by the question.
    // 'choice' is initialized with 1 so that execution always starts
    // from case 1 (100 rupee notes).
    int choice = 1;

    switch (choice) {

        // ------------------ Case 1 ------------------
        // Calculate the number of 100 rupee notes.
        case 1: {

            // Divide the total amount by 100.
            // Example:
            // amount = 370
            // 370 / 100 = 3 notes
            cout << "Your 100 notes is " << (amount / 100) << endl;

            // After taking all possible 100 notes,
            // store only the remaining amount.
            // Example:
            // 370 % 100 = 70
            amount = amount % 100;

            // No break is used here.
            // Control automatically falls to case 2.
        }

        // ------------------ Case 2 ------------------
        // Calculate the number of 50 rupee notes
        // using the remaining amount.
        case 2: {

            // Example:
            // Remaining amount = 70
            // 70 / 50 = 1 note
            cout << "Your 50 notes is " << (amount / 50) << endl;

            // Store the remaining amount.
            // Example:
            // 70 % 50 = 20
            amount = amount % 50;

            // No break.
            // Execution continues to case 3.
        }

        // ------------------ Case 3 ------------------
        // Calculate the number of 20 rupee notes
        // from the remaining amount.
        case 3: {

            // Example:
            // Remaining amount = 20
            // 20 / 20 = 1 note
            cout << "Your 20 notes is " << (amount / 20) << endl;

            // Store the remaining amount.
            // Example:
            // 20 % 20 = 0
            amount = amount % 20;

            // No break.
            // Execution continues to case 4.
        }

        // ------------------ Case 4 ------------------
        // Calculate the number of 1 rupee notes
        // from the remaining amount.
        case 4: {

            // Example:
            // Remaining amount = 0
            // 0 / 1 = 0 notes
            cout << "Your 1 notes is " << (amount / 1) << endl;

            // After taking 1 rupee notes,
            // the remaining amount always becomes 0.
            amount = amount % 1;

            // Break is used here because this is the last case.
            // It exits the switch statement.
            break;
        }

        // ---------------- Default Case ----------------
        // This block executes only when no case matches.
        // In this program it will never execute because
        // choice is always initialized to 1.
        default: {

            cout << "Invalid Choice" << endl;
        }
    }

    // Program ends successfully.
    return 0;
}
