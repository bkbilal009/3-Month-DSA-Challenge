#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     int i = 1;
//     while (i<=n){
//         int j = 1;
//         while (j <= n){
//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }


//     return 0;
// }


// int main(){

//     int n;
//     cin >> n;

//     int i = 1;

//     while (i <= n){
//         int j = 1;
//         while (j<=n){
//             cout << i;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }

//     return 0;
// }

// int main(){

//     int n;
//     cin >> n;

//     int i = 1;

//     while (i<=n){
//         int j = 1;
//         while (j <= n){
//             cout << j;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }

//     return 0;
// }

// int main(){

//     int n;
//     cin >> n;

//     int i = 1;

//     while (i<=n){
//         int j = 1;
//         while (j <= n){
//             cout << n-j+1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }

//     return 0;
// }

// int main(){

//     int n;
//     cin >> n;

//     int i = 1;
//     int count = 1;
//     while (i <=n){
//         int j = 1;
//         while (j <= n){
//             cout << count<< " ";
//             count = count + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }

//     return 0;
// }


// int main(){

//     int n ;
//     cin >> n;

//     int row = 1;

//     while(row <= n){
//         int col = 1;
//         while(col <= row){
//             cout << "*";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }


//     return 0;
// }



// int main(){
//     int n;
//     cin >> n;

//     int row = 1;
//     while (row <= n){
//         int col = 1;

//         while (col <= row){
//             cout << row;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }


//     return 0;
// }



// 5
// 1
// 23
// 345
// 4567
// 56789

// int main(){

//     int n;
//     cin >> n;

//     int row = 1;
//     while (row <= n){
//         int col = 1;
//         int val = row;
//         while (col <= row){
//             cout << val;
//             val = val + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }

//     return 0;
// }



#include<iostream>
using namespace std;

// int main(){
//     int n; 
//     cin>>n;

//     int i = 1;
//     int sum = 0;
//     while (i <= n){
//         sum = sum +i;
//         i = i + 1;
//     }
//     cout << "value of sum is "<< sum << endl;
//     return 0;
// }



// 6
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 
// 6 5 4 3 2 1 



// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while (i <= n){
//         int j = 1;
//         while (j <= i){
//             cout << (i - j + 1) << " ";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }



// 6
// A A A A A A 
// B B B B B B 
// C C C C C C 
// D D D D D D 
// E E E E E E 
// F F F F F F 


// int main(){


//     int n;
//     cin >> n;
//     int row = 1;
    
//     while ( row <= n){
//         int col = 1;
//         while (col <= n){
//             char ch = 'A' + row - 1;
//             cout << ch <<" ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }

//     return 0;
// }





// 7
// A B C D E F G 
// A B C D E F G 
// A B C D E F G 
// A B C D E F G 
// A B C D E F G 
// A B C D E F G 
// A B C D E F G 




// int main(){
//     int n;
//     cin >> n;
     
//     int row = 1;
//     while (row <= n){
//         int col = 1;
//         while (col <= n){
//             char ch = 'A' + col - 1;
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }


//     return 0;
// }



// 4
// A B C D 
// E F G H 
// I J K L 
// M N O P



// int main(){
//     int n;
//     cin >> n;
//     char start = 'A';
//     int row = 1;
//     while ( row <= n ){
//         int col = 1;
//         while ( col  <= n){
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
// A B C D 
// B C D E 
// C D E F 
// D E F G 




// int main(){

//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n){
//         int col = 1;
//         while ( col <= n){
//             char ch = 'A' + row + col - 2;
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }



//     return 0;
// }



// 5
// A 
// B B 
// C C C 
// D D D D 
// E E E E E 


// int main (){

//     int n;
//     cin >> n;
     
//     int row = 1;
//     while (row <= n){
//         int col = 1;
//         while (col <= row){
//             char ch = 'A' + row - 1;
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }


//     return 0;
// }


// 4
// B 
// C D 
// D E F 
// E F G H 

 
// int main (){

//     int n;
//     cin >> n;
     
//     int row = 1;
//     while (row <= n){
//         int col = 1;
//         while (col <= row){
//             char ch = 'A' + row + col - 1;
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
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
//     while (row <= n){
//         int col = 1;
//         char ch = 'A' + n - row;
//         while ( col <= row){
//             cout << ch << " ";
//             ch++;
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


// 3
// A B C 
// B C D 
// C D E 

// int main(){

//     int n;
//     cin >> n;

//     int row = 1;
//     while (row <= n){
//         char ch = 'A' + row - 1;
//         int col = 1;
//         while ( col <= n){
//             cout << ch << " ";
//             ch++;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
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
//     cin>> n;

//     int row = 1;
//     while (row <= n){

//         // Print space

//         int space = n - row;
//         while (space){
//             cout << " ";
//             space = space - 1;
//         }

//         // Print star 

//         int col = 1;
//         while (col <= row){
//             cout << "*";
//             col = col + 1;

//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }




// int main(){

//     int n;
//     cin >> n;
    
//     int row  = 1;
//     while (row <= n){

//         // Print spaces
//         int space = 1;
//         while ( space <= (2 * row - 1)){
//             cout << " ";
//             space++;
//         }
        
//         // Print star
//         int star = 1;
//         while (star <= n - row + 1 ){
//             cout << " * ";
//             row++;
//         }
//         cout << endl;
//         row ++;

//     }
//     return 0;
// }



// 4
//    1
//   121
//  12321
// 1234321



// int main(){
//     int n;
//     cin >> n;

//     int row = 1;
//     while (row <= n){

//          //  Print space (first triangle)

//          int space = n - row;
//          while(space){
//             cout << " ";
//             space = space - 1;
//          }

//         //  Print 2nd triangle

//         int j = 1;
//         while(j <= row){
//             cout << j;
//             j = j + 1;
//         }

//         // Print 3rd triangle 

//         int start = row - 1;

//         while(start){
//             cout << start;
//             start = start - 1;

//         }

//         cout << endl;
//         row = row + 1;
//     }

//     return 0;
// }


