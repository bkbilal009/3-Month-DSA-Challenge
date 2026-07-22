#include <iostream>
using namespace std;

/*
==========================================================
                Problem No. 1
==========================================================

Concept:
Pass By Value + Void Function

The function receives only a COPY of variable 'a'.

Original variable inside main() will NOT change.
*/

//----------------------------------------------------------
// Function: update()
// Return Type: void
// Parameter : int a (copy of original variable)
//----------------------------------------------------------
void update(int a)
{
    /*
        main()

        a = 10

            │
            │ Copy is sent
            ▼

        update()

        a = 10
    */

    // Divide the copied value by 2.
    a = a / 2;

    /*
        Now inside function

        a = 5

        But this is ONLY the copy.

        Original variable is still 10.
    */

    // Function ends.

    // Since return type is void,
    // nothing is returned.

    // Copy is destroyed.
}

int main()
{
    // Original variable.
    int a = 10;

    /*
        Function Call

        Only COPY goes.

        Original variable remains unchanged.
    */
    update(a);

    /*
        Original value is still 10.
    */
    cout << "A is : " << a << endl;

    return 0;
}



#include <iostream>
using namespace std;

/*
==========================================================
                Problem No. 2
==========================================================

Concept:
Pass By Value + Return Value

The function returns a value.

BUT...

The returned value is NOT stored.

So original variable never changes.
*/

//----------------------------------------------------------
// Function: update()
// Return Type: int
// Parameter : int a (copy)
//----------------------------------------------------------
int update(int a)
{
    /*
        main()

        a = 15

            │
            │ Copy
            ▼

        update()

        a = 15
    */

    // Copy becomes 10.
    a = a - 5;

    /*
        Function result

        a = 10
    */

    // Return 10 to main().
    return a;
}

int main()
{
    // Original variable.
    int a = 15;

    /*
        Function Call

        update(a);

        Function returns 10.

        BUT...

        Nobody stores this returned value.

        It is simply ignored.
    */
    update(a);

    /*
        Original variable is still 15.
    */
    cout << "A is : " << a << endl;

    return 0;
}




#include <iostream>
using namespace std;

/*
==========================================================
                Problem No. 3
==========================================================

Concept:
Pass By Value + Return Value + Assignment

The function returns a value.

This time the returned value
is stored back into variable 'a'.

Therefore original variable changes.
*/

//----------------------------------------------------------
// Function: update()
// Return Type: int
// Parameter : int a (copy)
//----------------------------------------------------------
int update(int a)
{
    /*
        main()

        a = 14

            │
            │ Copy
            ▼

        update()

        a = 14
    */

    // Calculate square.
    int ans = a * a;

    /*
        ans = 196
    */

    // Return 196.
    return ans;
}

int main()
{
    // Original variable.
    int a = 14;

    /*
        Function Call

        Step 1

        update(a)

        returns

        196

        -----------------------

        Step 2

        This statement

            a = update(a);

        becomes

            a = 196;

        Now original variable changes.
    */
    a = update(a);

    /*
        Now

        a = 196
    */

    cout << "A is : " << a << endl;

    return 0;
}


// ++++++++++++++++++++++++++++++++(Golder Rule) +++++++++++++++++++++++++++++++++++++++++++++++

// Problem 1

// update(a);

// ↓
// Copy changes

// ↓
// Nothing returned

// ↓
// Original variable remains same.



// Problem 2

// update(a);

// ↓
// Copy changes

// ↓
// Returns value

// ↓

// Returned value is ignored

// ↓

// Original variable remains same.




// Problem 3

// a = update(a);

// ↓

// Copy changes

// ↓

// Returns value

// ↓

// Returned value is stored in 'a'

// ↓

// Original variable changes.
