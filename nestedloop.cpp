#include <iostream>
using namespace std;
int main ()
{    //outer loop
    for   ( int  i=1 ; i<=4; i++)
    //inner loop
    {
   /*  for ( int j=1; j<=4; j++)
    {
        //work 
        cout << i << "" ;
    } */
    cout << i << endl;
    }
}

#include <iostream>
using namespace std;
int main()
{
    for (int i=1; i<=4; i++)
{
    for (int j=1; j<=4; j++)
    cout << "#" << i <<endl;
}
    cout<<endl;
}

/* terminal result  
#1
#1
#1
#1      

#2   like this 

if remove the endl after i then #1#1#1#1 
if remove i also then ####  like this in 4 consecutive line */


/* inverted patterns */
#include <iostream>
using namespace std;
int main ()
{    //outer loop

    for   ( int  i=1 ; i<=5; i++)
    
    //inner loop
    {
    for ( int j=1; j<=6-i; ++j)            // or define n also use it in outer loop; for (int j=1; j<=(n-i+1); j++
    {
        //work 
        cout<<"#";
    }
      cout << endl;
    } 
}

/* 11111
   2222
   333
   44
   5 */
#include <iostream>
using namespace std;
int main ()
{    //outer loop

    for   ( int  i=1 ; i<=5; i++)
    
    //inner loop
    {
    for ( int j=1; j<=6-i; ++j)
    {
        //work 
        cout<<i;
    }
      cout << endl;
    } 
}


#include <iostream>
using namespace std;
int main ()                                             /* 11111 
                                                           2222*/
{    //outer loop                                          333
                                                          //44
    for   ( int  i=1 ; i<=5; i++)                         //5 
    
    //inner loop
    {
    for ( int j=1; j<=i; ++j)
    {
        //work 
        cout<<i;
    }
      cout << endl;
    } 
}

this one will print   1 12 123 1234 12345   

#include <iostream>
using namespace std;
int main ()
{    //outer loop

    for   ( int  i=1 ; i<=5; i++)
    
    //inner loop
    {
    for ( int j=1; j<=i; ++j)
    {
        //work 
        cout<<5;
    }
      cout << endl;
    } 
}
