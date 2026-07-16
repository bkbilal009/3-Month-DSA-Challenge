#include<iostream>
using namespace std; 

int main(){

    // Variable % scope 


    int a = 3;
    cout << a << endl;

    if (true){
        int b = 4; 
        cout << b << endl;
    }


    // cout << b << endl; // Not accessable || This is also called scope 


    int b = 3;
    cout << b << endl; // Accesable 


    int i = 1;
    for (; i < 8; i++){
        cout << " Hi " << endl;
    }


    return 0;
}



if (1){
    int b;
    if (1){
        int b;
        if (1){
            int b;
        }
    }
}
