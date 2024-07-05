#include <iostream>

int main() {
   /* 
   
    std::string userInput;

    // Prompt the user to enter a string
    std::cout << "Please enter a string: ";

    // Read the user's input
    std::cin >> userInput;

    // Print the user's input back
    std::cout << "You entered: " << userInput << std::endl;
    
    int x = 4 ;
    int y = x*4 ;
  // std::cout << x*y  ;
 // 4x4x4 = 64 
    std::string userinput;
    std::cout << "please enter jatin month\n" ;
    std::cin >> userinput ;
    std::cout << "correct answer:" << userinput <<std::endl;
    // double (show decimal digit int can't show)
    double a =  28 ;
    double b = -05 ;
    double c = -2005;
    std::cout << a ;
    std::cout << b ;
    std::cout << c ;

    //char (show one letter and can store one letter only)
    char initial = 'a /n';

   std::cout << initial ;


   */
  std::string name;
  std::cout << "Please enter your name: ";
  std::getline(std::cin,name);
  //This is incorrect because std::cin >> name is an expression that extracts input from std::cin into the name variable.
  // It does not return std::cin, so you cannot chain it with std::getline() like that.
  //To fix the error, remove the std::cin >> part and simply pass std::cin and name as arguments to std::getline():
  std::cout << "Hello, " << name << "!\n";
  std::string phone;
  std::cout << "Please enter your phone model: ";
  std::getline(std::cin,phone);
  std::cout << phone << " is a great phone!\n"<<'\n';
/*there was problem in it like if I enter my full name it don't read the last name it was bcoz the std::cin reads the input upto the the first whitespace character(space, tab ,new line) 
use std::getline() to read the entire line of input , including spaces , until it encounter a new line /n */ 
// phone no. email , verification code , research 

std::string phone_number ;
std::string email_id ;
std::string verification_code ;
std::string research ;
std::cout << " Please enter your phone number: -_- " ;
std::cin >> phone_number;
std::cout << phone_number << " is a precious phone number. *_-\n" << '\n';

std::cout << " Please enter your email id: " ;
std::cin >> email_id;
std::cout << email_id << " is a precious email id :)\n" <<'\n';

std::cout << " Please enter your verification code received on email id: ";
std::cin >> verification_code;
std::cout <<  " You'r welcomed in hell! have fun :)\n"<< '\n';

std::cout << " Please enter your research field:";
std::getline(std::cin,research);
std::cout<< research << " is a unique topic :) " <<'\n';










    return 0;
}

