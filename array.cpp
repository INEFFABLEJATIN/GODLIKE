/* #include<iostream>
using namespace std;
int main() {
    int arr[10];
    for ( int i = 0; i <= 9 ;++i)
    {  cout << arr[i]=i ;
    }
    return 0; 
    }
    /* arr[i]=i is called array intialization or assigning values to an array. ; cout<<arr[i]; 
         there is error in this code it is printing 16 digit 
         if you still remember the soln then good if not .... */
     



#include<iostream> 
using namespace std;

int main() {
 

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
