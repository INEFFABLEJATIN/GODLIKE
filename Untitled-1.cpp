#include <iostream>
using namespace std;

int main ()
{
/* int a = 5 ;
int * p ;
p = &a ;
cout << a << endl ;
cout << "value of p (address of a)" << p << endl;
cout << "value of *p (value of a)" << *p << endl ;
std::cout << &a ;

*p = 8 ;
cout << "after changing the value of a :  " << a << endl;
cout << *p << endl;
return 0;
 */
int e = 2;
int b = e ++ ;
cout << "++ badhmai" << endl;
cout << " dekh b ke value e ke barabr  = " << b ;
cout << "\n e ki value inc hue   = " << e <<endl;

cout << "++ phale " << endl;
int c = 3;
int d = ++c;
cout << "dekh c ki value inc hue" << c ; 
cout << "\n d ki bhi inc hue same result  "<< d << endl;


int f = 20 ;
int k = 30 ;
f += 5 ;// f = f + 5
cout << f << endl;

/* relation operator 
a<=b a<b a>=b a>b a==b a!=b  ,,, ans is false 0 is printed .. 
logical operator 
cout<< ( (3 < 5) && (10 > 5) ) ans is 1 
cout<< ( (3 > 5) && (10 > 5) ) ans is 0 

cout<< ( !(3 > 5)) ans is 1 */


}
