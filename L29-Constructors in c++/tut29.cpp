#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
       // Creating Constructor
       // Constructor is a specal member function with the same name as of the class.
       //It is used to initilize the objects of its class
       //It is automatically invoked whenever an object is created

       Complex(void);  // Constructor declaration
       void printNumber()
    {
        cout << "Your number is " << a << " + " << b <<"i"<<endl;
    }
};
Complex::Complex(void)  // ---->This is a default constructor as It takes no parameters
{
    a = 10;
    b = 0;
}
int main(){
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}
/*  Characteristics of Constructor

1. It should be declared in the public section of the class
2. They are automatically invoked whenever the onject is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their adress*/