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

