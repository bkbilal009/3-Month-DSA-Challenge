#include<iostream>
using namespace std;

int main(){

    int a , b; 

    cout << "Enter the value of a " << endl;
    cin >> a;

    cout << "Enter the value of b" << endl;
    cin >> b;

    char op; 
    cout << "Enter operation you want to perform : " << endl;
    cin >> op;

    switch ( op ){
        case '+' : cout <<"Your answer is : "<<  (a + b) << endl;
        break;

        case '-': cout <<"Your answer is : "<< (a - b) << endl;
        break;

        case '*': cout <<"Your answer is : "<< (a * b) << endl;
        break;

        case '/': cout <<"Your answer is : "<< (a / b) << endl;
        break;

        case '%': cout <<"Your answer is : "<< (a % b) << endl;
        break;

        default: cout << "invalid plzz correct it & try agian!" << endl;
        break;

    }

    return 0;
}
