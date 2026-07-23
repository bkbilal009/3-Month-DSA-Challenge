#include<iostream>
using namespace std;

// Hold

void printArray(int arr[],int size){
    cout << "Printing the array" << endl;
    // print the array

    for (int i = 0; i <= size; i++){
        cout << arr[i] << " ";
    }
    cout << "Printing DONE"<< endl;

}

int main(){

    // declare 

    int a[15];
    
    // Accessing an array

    cout << "Value of zero at : " << a[14] << endl;

    int second[4] = {3,5,7,8};
    // Accessing the element
    cout << "The value of second is : " << second[1] << endl;


    int third[5] = {0};

    cout << "The value of third is: " << third[3] << endl;



    int fourth[10] = {1};

    int n = 10;
    cout << "Printing the array: " << endl;

    // print the array

    for (int i = 0; i <= n; i++){
        cout << fourth[i] << " " << endl;
    }



    cout << "Everything is fine: " << endl;


    return 0;
}
