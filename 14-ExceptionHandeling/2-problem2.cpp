#include <iostream>
using namespace std;
int division(int a, int b) throw(int) { 
// Here throw is written to show that this function throwing an exception and defining the exception is int
// The values written in braces in function declaring are to taking something as parameter
    if (b == 0)
        throw 101; // we can throw anything,char,integer,class etc
    return a / b;
}
int main()
{
    int x = 5, y = 0, z;
    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (int e)
    { // this is a catch block for integersproblem
        cout << "Division by zero " << endl
             << "Error code " << e << endl;
    }
    cout << "Function ended";
}