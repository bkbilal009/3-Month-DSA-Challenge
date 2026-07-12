#include<iostream>
using namespace std;

int main(){
    // +++++++++++++++++++++++++++++++++++++++++ Post & Pre increment +++++++++++++++++++++++++++++++++++++++++++++

    int i = 7;

    cout << (++i) << endl; // 8
    // 1 + 8 = 8 , i = 8
    cout << (i++) << endl; // 8
    // 8 + 1 = 9 , i = 9
    cout << (i--) << endl; // 9
    // 9 - 1 = 8 , i = 8
    cout << (--i) << endl; // 7
    // 1 - 8 = 7 , i = 7

    return 0;
}
