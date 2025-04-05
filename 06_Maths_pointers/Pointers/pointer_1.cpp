#include <iostream>

using namespace std;

int main()
{

    int a = 5;
    int *ptr = &a;
    cout << sizeof(ptr) << endl;

    char ch = 'a';
    char *cptr = &ch;
    cout << sizeof(cptr) << endl;

    long int b = 4;

    long *lptr = &b;
    cout << sizeof(lptr) << endl;

    int arr[] = {1, 2, 3, 4, 5};

    int *arrPtr = arr;
    cout << arrPtr << endl;

    cout << *arrPtr << endl;

    char carr[] = {'a', 'b', 'c'};
    char *carrPtr = carr;

    cout << carrPtr << endl;
    cout << *carrPtr << endl;

    char c = 'a';
    char *cptr = &c;

    cout << cptr << endl;
    cout << *cptr << endl;

    return 0;
}