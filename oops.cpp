
/* oop is programming paradigm(set of rules and ideas and concept) 
learn data types and variables before
string -> attributes
int -> variable    
everything in class is private by default
we have to be public: so that it can be accessible
we can describe behaviour with class method
----->>>> if you use id instead of this->id, the compiler will assume that you are referring to the function
 parameter id, not the member variable id. This can lead to unexpected behavior or errors, especially if 
 the function parameter has the same name as the member variable

void is used to indicate that a function does not have to return a value
 doen't return any type of data to caller
 The reason why void is sometimes called the "return type" is because it specifies the type of value that 
 the function will return. In C++, every function must have a return type, even if it doesn't actually 
 return any data. The return type is specified after the function name, followed by a pair of parentheses ().
 The function simply performs an action (printing a message to the console) and then exits.

*/

#include <iostream>
using std::string;
using namespace std;
class Employee{
    
    public: // this called access modifiers private public protected
    string Name;
    string Company;
    string id;
    double salary;

    void display() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;  
        cout << "id - "<< this->id << endl;
        cout << "salary - " << this->salary <<endl;

    }
    //if we do not create a constructor then also a defalut constructor is created by complier 
    Employee (string name, string company, string id, double salary)
    {
            Name = name;  
            Company = company;
            this-> id = id; // -> arrow operator or member access operator
            this-> salary = salary;
    }
    
};

int main (){
    
    Employee employee1  = Employee("Jatin Maheshwari", "Marvel studios", "BATMAN" , 4000.30);
    employee1.display();

    cout<<"            "<<endl;
  
    Employee employee2 = Employee("Harshit Maheshwari " , "Maheshwari global services pri. ltd." , "hello" , 90);
    employee2.display();

/* 
basic method but it is long 
Employee employee1;
employee1.Name = "jatin maheshwari";
employee1.Company = "";
employee1.id= "";
employee1.salary = "";
employee.display();



 */



}
