// +++++++++++++++++++++++++++++++++++++++++ (Triangular Pattern) +++++++++++++++++++++++++++++++++++++++++++++++++++++++


#include<iostream>
using namespace std;



// 4
// A 
// B B 
// C C C 
// D D D D

// int main(){

//     int n;
//     cin>>n;

//     int row = 1;
//     while (row <= n){
//         int col = 1;
//         while (col <= row ){

//             char ch = ('A'  + row - 1);
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }

//     return 0;
// }



// 4
// A 
// B C 
// D E F 
// G H I J


// int main(){

//     int n;
//     cin >> n;
//     char start = 'A';
//     int row = 1;
//     while(row <= n){
//         int col = 1;
//         while(col <= row){
//             cout << start << " ";
//             start = start + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }



//     return 0;
// }



// 4
// A 
// B C 
// C D E 
// D E F G



// int main(){

//     int n;
//     cin >> n;
//     int row = 1;
//     while(row <= n){
//         int col = 1;
//         while(col <= row){
//             char ch = ('A' + row + col - 2);
//             cout << ch << " ";
//             col ++ ;
//         }
//         cout << endl;
//         row ++;
//     }


//     return 0;
// }



// 4
// D 
// C D 
// B C D 
// A B C D 


// int main(){

//     int n;
//     cin >> n;
//     int row = 1;
//     while(row <= n){
//         int col = 1;
//         char ch = ('A'  + n - row);
//         while(col <= row){
//             cout << ch << " ";
//             ch ++;
//             col ++ ;
//         }
//         cout << endl;
//         row ++;
//     }


//     return 0;
// }




// 4
//    *
//   **
//  ***
// ****



// int main(){

//     int n;
//     cin >> n;
//     int row = 1;
//     while(row <= n){
//         //  Print space 

//         int space = n - row;
//         while (space){
//             cout << " " ;
//             space --;
//         }

//         // Print star (*)

//         int col = 1;
//         while(col <= row){
//             cout << "*";
//             col ++;
//         }
//         cout << endl;
//         row ++;
//     }


//     return 0;
// }


// 4
//  *  *  *  * 
//  *  *  * 
//  *  * 
//  *


// int main(){

//     int n;
//     cin >> n;

//     int row = 1;
//     while(row <= n){
        
//         int star = n - row + 1;
//         while (star){
//             cout << " * ";
//             star --;

//         }
//         cout << endl;
//         row = row + 1;
//     }

//     return 0;
// }




// 4
//  *  *  *  * 
//    *  *  * 
//      *  * 
//        * 


// int main(){
//     int n;
//     cin >> n ;

//     int row = 1;
//     while (row <= n){

//         // Print space 
//         int space = row - 1;
//         while (space){

//             cout << "  " ;
//             space --;
//         }
//         // Print star

//         int star = n - row + 1;
//         while (star){
//             cout << " * ";
//             star --;
//         }
//         cout << endl;
//         row ++;
//     }

//     return 0;
// }




// 4
// 1 1 1 1 
//  2 2 2 
//   3 3 
//    4 




// int main(){
//     int n;
//     cin >> n ;

//     int row = 1;
//     while (row <= n){

//         // Print space 
//         int space = row - 1;
//         while (space){

//             cout << " " ;
//             space --;
//         }
//         // Print value

//         int count = n - row + 1;
//         while (count){
//             cout <<row<<" ";
//             count --;
//         }
//         cout << endl;
//         row ++;
//     }

//     return 0;
// }




// 4
//  .  .  . 1 
//  .  . 2 2 
//  . 3 3 3 
// 4 4 4 4 


// int main(){
//     int n;
//     cin >> n ;

//     int row = 1;
//     while (row <= n){

//      // print space
        
//         int space = n - row;
//         while (space){
//             cout << " . ";
//             space --;
//         }

//         //  Print no 
//         int value = 1;
//         while(value <= row){
//             cout << row << " ";
//             value ++;
//         }
//         cout << endl;
//         row ++;
//     }

//     return 0;
// }



// 4
// 1 2 3 4 
//  2 3 4 
//   3 4 
//    4 





// int main(){
//     int n;
//     cin >> n ;

//     int row = 1;
//     while (row <= n){

//      // print space
        
//         int space = row - 1;
//         while (space){
//             cout << " ";
//             space --;
//         }

//         // Print value

//         int value = row;
//         while (value <= n){
//             cout << value << " ";
//             value ++;
//         }
//         cout << endl;
//         row = row  + 1;
//     }

//     return 0;
// }




// 4
//       1
//     2 3
//   4 5 6
// 7 8 9 10 






// int main(){
//     int n;
//     cin >> n ;

//     int row = 1;
//     int value = 1;
//     while (row <= n){

//      // print space
        
//         int space = n - row;
//         while (space){
//             cout << "  ";
//             space --;
//         }

//         //  Print no 
//         int col = 1;
//         while(col <= row){
//             cout << value << " ";
//             value ++;
//             col ++;
//         }
//         cout << endl;
//         row ++;
//     }

//     return 0;
// }




// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ (second last patterns) +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++




// 4
//    1
//   121
//  12321
// 1234321





// int main(){

//     int n;
//     cin >> n;

//     int row = 1;
//     while(row <= n){

//         // Print space  (triangle)

//         int space = n - row;
//         while(space){
//             cout <<" ";
//             space --; 

//         }

//         // print 1st triangle 

//         int col = 1;
//         while(col <= row){
//             cout << col ;
//             col = col + 1;
//         }


//         // Print 2nd triangle

//         int start = row - 1;
//         while(start){
//             cout << start;
//             start --;
//         }
//         cout << endl;
//         row = row + 1;
//     }




//     return 0;
// }







// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ( Dabangg pattern ) +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



// 5
// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4  *  * 4 3 2 1 
// 1 2 3  *  *  *  * 3 2 1 
// 1 2  *  *  *  *  *  * 2 1 
// 1  *  *  *  *  *  *  *  * 1




int main(){

    int n;
    cin >> n;

    int row = 1;
    while(row <= n){

        int col = 1;
        while(col <= n - row + 1){
            cout << col << " " ;
            col ++;
        }

        // Print star 
        int star = 1;
        while (star <= 2 * (row - 1)){
            cout << " * ";
            star ++;
        }

        // Print last triangel

        int value = n - row + 1;
        while( value >= 1){
            cout << value << " ";
            value --;
        }

        cout << endl;
        row ++;
    }
    return 0;
}
