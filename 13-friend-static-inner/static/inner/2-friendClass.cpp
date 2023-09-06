#include <iostream>
using namespace std;
class your;
class My
{
private:
    int a = 5;
    friend your;
};
class your
{
public:
    My b; // Object of class My class
    void fun1()
    {
        cout << b.a;
    }
};
