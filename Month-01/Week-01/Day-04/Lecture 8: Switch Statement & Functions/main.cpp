#include<iostream>
using namespace std;

int main(){

    int num = 2;
    cout << endl;

    switch (num)
    {
    case 1: cout << "First" << endl;
        break;
    case 2: cout << "Second" << endl;
        break;
    
    default: cout << "It is default case" << endl;
        break;
    }


// +++++++++++++++++++++++++++++++ (int / char) --> Yes || (float / string) --> NO ++++++++++++++++++++++++++++++++



    char num = 'a';
    cout << endl;

    switch (num)
    {
    case 1: cout << "First" << endl;
        break;
    case '1': cout << "Second" << endl;
        break;
    
    default: cout << "It is default case" << endl;
        break;
    }












  

    char num = 'a';
    cout << endl;

    switch (num)
    {
    case 1: cout << "First" << endl;
        break;
    case '1': cout << "Second" << endl;
        break;
    
    default: cout << "It is default case" << endl;
        break;
    }



      // +++++++++++++++++++++++++++++++ (Nested switch) +++++++++++++++++++++++++++++++++++++++++++++++





    char ch = 'a';
    int num = 2;

    cout << endl;

    switch (ch){

        case 1: cout << "First" << endl;
                cout << "First again!" << endl;
                break;

        case 'a': switch (num){
            case 1 : cout << "Value of num is " << num << endl;
            break;
        default: cout << "It is default case 2" << endl;
        }
        break;

        default: cout << "It is default case" << endl;
    }





    char ch = 'a';
    int num = 2;

    cout << endl;

    switch (ch){

        case 1: cout << "First" << endl;
                cout << "First again!" << endl;
                break;

        case 'a': switch (num){
            case 1 : cout << "Value of num is " << num << endl;
            break;
        // default: cout << "It is default case 2" << endl;
        }
        break;

        default: cout << "It is default case" << endl;
    }

    return 0;
}
