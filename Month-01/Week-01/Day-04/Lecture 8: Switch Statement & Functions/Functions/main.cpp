#include<iostream>
using namespace std;

int main(){

    // pow(a,b)

    int a,b;
    cin >> a >> b;
    int ans = 1;

    for (int i = 1; i <= b; i++){
        ans = ans * a;
    }

    cout << "Answer is: " << ans << endl;

    int c,d;
    cin >> c >> d;
    int ans1 = 1;

    for (int i = 1; i <= d; i++){
        ans1 = ans1 * c;
    }

    cout << "Answer is: " << ans1 << endl;


    return 0;
}






#include<iostream>
using namespace std;

// Function returns:
// 1 (true)  --> Even
// 0 (false) --> Odd

bool isEven(int a){

    // If last bit is 1, number is odd
    if (a & 1){
        return false;
    }

    // Otherwise number is even
    else{
        return true;
    }
}

int main(){

    int num;
    cout << "Enter Number: ";
    cin >> num;

    // Calling function
    if (isEven(num)){
        cout << "Number is Even" << endl;
    }
    else{
        cout << "Number is Odd" << endl;
    }

    return 0;
}
