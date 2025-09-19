#include <iostream>
using namespace std;

void analyze_pointer(int *ptr)
{
    cout << ptr << endl;  // prints memory location pointed by the pointer
    cout << *ptr << endl; // prints the value of the integer pointed to by the pointer
}

int main()
{
    int iValue = 100; // allocated an int on stack
    analyze_pointer(&iValue);

    int *p = new int(20); // allocated an int on the heap
    analyze_pointer(p);

    delete p; // deleting to avoid memory leaks

    return 0;
}