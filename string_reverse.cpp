#include <iostream>
#include <string>
using namespace std;

int main()
{
    string *s = new string(); // dynamically allocating memory for string

    cout << "Enter a string : ";
    getline(cin, *s);

    // print in reverse
    for (int i = s->length() - 1; i >= 0; i--)
    {
        cout << (*s)[i];
    }
    cout << endl;

    delete s; // free memory

    return 0;
}