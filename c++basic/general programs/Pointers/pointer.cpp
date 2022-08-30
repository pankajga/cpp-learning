#include <iostream>
using namespace std;

void main() {
    // A pointer * is a variable type which points to a variable E.g. - consider the magnetic pointer, its points to different regions North South.
    // & holds the reference to a variable i.e. it holds the address
    // *& - this points to the reference hence it will show thw value at that address.
    //int *p1 = var; // this is not possible since var is int type and *p1 is a pointer type;
    //int &p2; // this is also not possible as p2 hasnt been assigned a address yet, we need to initialse it to a variable;

    //int *p3 = 20; // not possible as *p3 is a pointer to a variable p3;

    //int *pointer = &num2;   //okay
    //Despite the similar appearance to the assignment statement,
    //this initialises pointer not *pointer. It declares pointer to be a pointer, of the same type int* as &num2.
    //When you use the dereference operator * on a pointer, you get what the pointer is pointing to, 
    //and if you use the address-of operator & you get the address of (i.e. pointer to) something.

    //To make pointer point to a variable, then just assign to it:

    //pointer = &num1;
    
     int var = 10;
     int *p3;
     p3 = &var;
     int *p4 = &var;
     cout << "var: " << var << endl; // 10
     cout << "*p3: " << *p3 << endl; // 10
     cout << "p3: " << p3 << endl;   // 00B3FB64
     cout << "&var: " << &var << endl;// 00B3FB64
     cout << "*p4: " << *p4 << endl;  // 10
     cout << "p4: " << p4 << endl;    // 00B3FB64
}

// The dereference operation starts at the pointer and follows its arrow over to access its pointee. 
// The goal may be to look at the pointee state or to change the pointee state.
// The dereference operation on a pointer only works if the pointer has a pointee -- the pointee must be allocated and 
// the pointer must be set to point to it. The most common error in pointer code is forgetting to set up the pointee. 
// The most common runtime crash because of that error in the code is a failed dereference operation. 
// In Java the incorrect dereference will be flagged politely by the runtime system. 
// In compiled languages such as C, C++, and Pascal, the incorrect dereference will sometimes crash, 
// and other times corrupt memory in some subtle, random way. 
// Pointer bugs in compiled languages can be difficult to track down for this reason.