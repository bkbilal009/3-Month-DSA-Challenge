#include<iostream>
using namespace std;

int main(){

    int a = 4;
    int b = 6;

    cout << "a&b is: " << (a&b) << endl;
    cout << "a|b is: " << (a|b) << endl;
    cout << "~a is: " << (~a) << endl;
    cout << "a^b is: " << (a^b) << endl;



    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;



    int n = 10;
    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for (int i = 1; i <= n; i++){
        int nextNumber = a + b;
        cout << nextNumber << " ";
        
        a = b;
        b = nextNumber;
    }




    

    return 0;
}
