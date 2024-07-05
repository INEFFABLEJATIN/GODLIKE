/* #include <stdio.h>
int main(){
    printf("why cout<< doesnt work");
    cout<<"";
    return 0;
}
*/
//this is c not cpp 
// don't get confuse always pasting 
//cpp code in c and then crying why it is not working

#include<stdio.h>



int main() {
    int x, y;
    printf("whats X? ");
    scanf("%d", &x);
    printf("whats Y? ");
    scanf("%d", &y);
    if (x < y) {
        printf("x is less bro\n");
        }

    else if (x > y){
            printf("x is not less bro");
        }
    else if 
       ( printf("x is equal to y") );
    
    

    /* The %d format specifier tells scanf to read an integer value
     from the input stream and store it in the x variable.
    the & symbol is used before the variable name to pass the
     address of the variable to scanf. This is because scanf needs
      to know where to store the input value in memory.*/



    return 0;
}