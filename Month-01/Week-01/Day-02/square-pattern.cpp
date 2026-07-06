#include<iostream>
using namespace std;


// 4
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 


// int main(){

//     int n ;
//     cin >> n;

//     int row = 1;
//     int count = 1;
//     while (row <= n){
//         int col = 1;

//         while(col <= row){
//             cout << count << " ";
//             count = count + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }

//     return 0;
// }



// 4
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 



// int main(){

//     int n;
//     cin >> n;

//     int row = 1; 
//     while (row <= n){
//         int col = 1;
//         int value = row;
//         while(col <= row){
//             cout << value << " ";
//             value = value + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }

//     return 0;
// }


// +++++++++++++++++++++++++++++ Other way to solve prob ++++++++++++++++++++++++++++++++++++++++++++

// 4
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 


// int main(){

//     int n;
//     cin >> n;

//     int row = 1; 
//     while (row <= n){
//         int col = 1;
//         while(col <= row){
//             cout << (row + col) - 1  << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }



// 4
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 


// int main(){

//     int n;
//     cin >> n;

//     int row = 1;
//     while(row <= n){

//         int col = 1;
        
//         while(col <= row){
//             cout << row - col + 1 << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }


// 3
// A A A 
// B B B 
// C C C 


// int main(){

//     int n;
//     cin >> n;


//     int row = 1;
//     while(row <= n){

//         int col = 1;
//         while(col <= n){
//             char ch = 'A' + row - 1;

//             cout << ch <<" ";
//             col = col + 1;

//         }
//         cout << endl;
//         row = row + 1;

//     }


//     return 0;
// }


// 4
// A B C D 
// A B C D 
// A B C D 
// A B C D



// int main(){

//     int n;
//     cin >> n;

//     int row = 1;
//     while (row <= n){

//         int col = 1;
//         char ch = 'A' + col - 1;
//         while( col <= n){

//             cout << ch << " ";
//             ch = ch + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }




//     return 0;
// }



// 3
// A B C 
// D E F 
// G H I




// int main(){

//     int n;
//     cin >> n;

//     int row = 1;
//     char start = 'A';
//     while(row <= n){

//         int col = 1;
//         while(col <= n){

//             cout << start << " ";
//             start = start + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }


// 3
// A B C 
// B C D 
// C D E 


// int main(){

//     int n;
//     cin >> n;

//     int row = 1;
//     while(row <= n){
//         int col = 1;
//         while(col <= n){

//             char ch = 'A' + row + col - 2;
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }
