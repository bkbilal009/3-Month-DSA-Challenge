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

// Check prime No


     int n ;
    cout << "Enter your value " << endl;
    cin >>n;

    bool isPrime = 1;

    

    for (int i = 2 ; i < n; i ++){

        // reminder = 0, Not a prime number
        if (n%i == 0){
            isPrime = 0;
            break;
        }

        if (isPrime == 0){
            cout << "Not a prime Number " << endl;
        }
        else{
            cout << "is a prime number " << endl;
        }

    }

    return 0;
}
