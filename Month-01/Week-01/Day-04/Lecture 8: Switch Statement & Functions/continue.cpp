#include<iostream>
using namespace std;

int main(){

    int num = 1;

    switch (num){

        case 1:
            cout << "First" << endl;
            continue;   // ❌ Invalid

        case 2:
            cout << "Second" << endl;
    }

    return 0;
}
