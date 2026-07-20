#include <iostream>
using namespace std;

int main() {

    int num = 1;

    switch (num) {

        case 1:
            cout << "Print number" << endl;

            // return 0 exits the main() function immediately.
            // Since the program ends here, the remaining switch
            // cases and code below will never execute.
            return 0;

        case 2:
            cout << "Can't print number" << endl;
    }

    // This line runs only if no return statement
    // has already ended the program.





  switch (num) {
    case 1:
        cout << "Print number";
        break;    // Only exits the switch
}

cout << "After switch";

  
    return 0;
}
