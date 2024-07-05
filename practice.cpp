#include <iostream>
using namespace std;

int main (){
    // float num1 = 3.14;
    // float num2 =0.5;
    // float sum = num1 + num2;
int number = 88;     // An int variable with a value
int * pNumber;       // Declare a pointer variable called pNumber pointing to an int (or int pointer)
pNumber = &number;   // Assign the address of the variable number to pointer pNumber
 // &number is the address of operator, which return the memory address of the intergers variable 
int * pAnother = &number; // Declare another int pointer and int to address of the variable number or rather say assigns the address of number to panother effectively making panother a pointer to number
cout<< *pNumber << endl;
cout << "____ " <<endl;
    // Normal array
    int normalArray[5]; // This array has a fixed size of 5.

    // Fill the normal array with some values and print them.
    for (int i = 0; i < 5; i++) {
        normalArray[i] = i * i; // Square of the index.
        std::cout << "normalArray[" << i << "] = " << normalArray[i] << std::endl;
    }

    // Dynamic array
    int* dynamicArray = new int[5]; // This array is also of size 5 initially, but we can change its size later if we want.

    // Fill the dynamic array with some values and print them.
    for (int i = 0; i < 5; i++) {
        dynamicArray[i] = i * i * i; // Cube of the index.
        std::cout << "dynamicArray[" << i << "] = " << dynamicArray[i] << std::endl;
    }

    // We must remember to delete the dynamic array when we're done with it.
    delete[] dynamicArray; // We're returning the rented bus.

    return 0;




}
/* The expression std::basic_ostream<char, std::char_traits<char>> & operator<<(float _Val) is a bit overwhelming, but let's break it down:

std::basic_ostream: This is a class template in the C++ Standard Library that represents a basic output stream. It's a base class for more specific output stream classes like std::ostream and std::wostream.

<char, std::char_traits<char>>: These are template parameters for std::basic_ostream. char is the character type, and std::char_traits<char> is a traits class that provides information about the character type, such as how to manipulate and compare characters.

& operator<<: This is an overloaded insertion operator (also known as the "stream insertion operator" or " insertion operator"). It's a binary operator that takes two operands: an output stream (on the left) and a value (on the right). The & symbol indicates that this operator returns a reference to the output stream.

(float _Val): This is the parameter list for the operator<< function. In this case, it takes a single float argument, _Val, which is the value to be inserted into the output stream.

So, when you write std::cout << sum << std::endl;, the compiler resolves the operator<< to this specific overload, which inserts the float value sum into the output stream std::cout.

Here's a simplified explanation of what happens when you use this operator:

The operator<< function is called with std::cout as the left operand and sum as the right operand.
The function converts the float value sum to a string representation using the std::num_put facet (a part of the C++ locale system).
The resulting string is inserted into the output stream std::cout.
The function returns a reference to the modified output stream, allowing you to chain multiple insertions using the operator<< syntax.
This overload of operator<< is a key part of the C++ library's input/output system, making it easy to print values of various types to output streams.

*/