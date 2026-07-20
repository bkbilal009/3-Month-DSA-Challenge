#include<iostream>
using namespace std;

int main(){

    int amount; 
    cout << "Enter your Amount" << endl;
    cin >> amount; 

    int choice = 1;

    switch(choice){

        case 1:{
            cout << "Your 100 notes is " << (amount / 100) << endl;
            // break;
            amount = amount % 100;
        }

        case 2:{
            cout << "Your 50 notes is " << (amount / 50) << endl;
            // break;
            amount = amount % 50;
        }

        case 3:{
            cout << "Your 20 notes is " << (amount / 20) << endl;
            // break;
            amount = amount % 20;
        }

        case 4:{
            cout << "Your 1 notes is " << (amount / 1) << endl;
            amount = amount % 1;
        }

        default:{
            cout << "Invalid" << endl;
        }
    }

    return 0;
}
