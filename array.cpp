/* #include<iostream>
using namespace std;
int main() {
    int arr[10];
    for ( int i = 0; i <= 9 ;++i)
    {  arr[i]=i /* arr[i]=i is called array intialization or assigning values to an array. ; cout<<arr[i]; 
         there is error in this code it is printing 16 digit */
#include<iostream> 
#include<cstdlib> //rand()
#include<ctime>   //time()

using namespace std;

int main() {
  /*    srand(time(0)); // Seed the random number generator

    int arr[9]; // Declare an array to store 9 digits

    // Initialize array elements with random digits
    for (int i = 0; i < 9; ++i) {
        arr[i] = rand() % 10; // Generate a random digit (0-9)
    }
  
    // Print the array elements
    for (int i = 0; i < 9; ++i) {
        cout << arr[i];
    }                               */
/* 
     int marks[6];
     for (int b=0;  b<=5; b++){
        cin>>marks[b];
     }

     for (int b=0; b<=5; b++){
        if (marks[b] < 35 ) cout << b << " ";
     } 
     
 */

     int n ;
     cout << " Enter no. of students : ";
     cin  >> n ;
     int marks [n];
     for (int i=0;  i<n; i++){
        cin >> marks [i];
     }

     for (int i=0; i<n; i++){
        if (marks[i] < 35 ) cout << i+1 << " ";
     } 
     
      
    return 0;
}