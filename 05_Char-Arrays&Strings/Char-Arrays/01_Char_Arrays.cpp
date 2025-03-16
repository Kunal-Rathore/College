#include <iostream>
using namespace std;



int main() {
 

    // Input a string using cin
    char arr[10];
    cout << "Enter your name- ";
    cin >> arr;
    cout << "Your name is- " << arr << endl << endl;

    // Example proof: NULL character at the end of the string
    char arr2[10] = {'k', 'u', 'n', 'a', 'l'};
    cout << "String is- " << arr2 << endl;

    // Type casting: char to int
    char temp = arr2[5];
    int value = int(temp);
    cout << "The value at arr2[5] in integer is- " << value << endl;

    // Input a string with tabs or spaces using cin.getline()
    cout << endl << endl;
    char arr3[100];
    cout << "Enter a string with tabs or spaces- ";
    cin.ignore();  // Clear the input buffer
    cin.getline(arr3, 100);  // arr3 is name of array and 100 is size of string
    cout << "String is- " << arr3 << endl;
  

    return 0;
}