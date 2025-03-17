

// Strings have various utility functions from which we are going to discuss some of them is that file

#include <iostream>

using namespace std;


int main() {
 
// 1st -> Getline
string str1;

// I/P with spaces -
cout<<"\nEnter input with spaces- ";
getline(cin, str1);
      
// O/P -
cout<<"String is- ";
cout<< str1 <<endl;
    

cout<<endl<<endl;


// 2nd -> String length
string str2 = {"Kunal Rathore"};

cout<<"Length of string str2 is- "<< str2.length()<<endl;
cout<<endl<<endl;



// 3rd -> String empty

string str3 = {""};

cout<<"The string str3 is empty or not- "<< str3.empty()<<endl;   // 1 if empty & 0 if not empty

cout<<endl<<endl;


// 4th -> String at

string str4 = {"Dog is a pet animal"};

cout<<"The string str4 at 3 index is- "<<str4.at(3)<<endl;

cout<<endl<<endl;


// 5th -> Front

string str5 = {"BMW is the best car"};
cout<<"The front of string str5 is- "<<str5.front()<<endl;

cout<<endl<<endl;


// 6th -> Back

string str6 = {"Thar is a car"};

cout<<"The back of string str6 is- "<<str6.back()<<endl;

cout<<endl<<endl;



// 7th -> Append (to combine two strings)

string strA1 = {"Kunal "};
string strA2 = {"Rathore"};

cout<<"The string STRA1 after APPEND is- "<<strA1.append(strA2)<<endl;
cout<<endl<<endl;


// 8th -> Erase (to erase from some index till some index)

string str8 = {"Kunal is a good boy"};

str8.erase(6,5);  // 7 is starting index to erase and 6 is no. of characters to erase

cout<<"The string STR8 after erasing from index 6 till 5 characters is- "<<str8<<endl;

cout<<endl<<endl;


// 9th -> Insert (to insert some string at some index)

string str9 = {"Kunal good boy"};

string temp = {"is a "};

str9.insert(6,temp);  //  6 is the inserting index and temp is the inserting string
cout<<"String STR9 after insert is- "<<str9<<endl;


cout<<endl<<endl;



// 10 -> Push_back

string str10 = {"Babbar"};
str10.push_back('R');

cout<<"String STR10 after push back is- "<<str10<<endl;
cout<<endl<<endl;


// 11 -> Pop_back

string str11 = {"BabbarR"};
str11.pop_back();

cout<<"String STR11 after pop back is- "<<str11<<endl;
cout<<endl<<endl;


// 12 -> Find (To find some string in a large string)


    string large_String = {"Hey I am Kunal Rathore,  here we are going to find in this string"};

    string find_String = {"here we are going"};
cout<<"12th find a string in a large string- ";
    if(large_String.find(find_String)  == string :: npos)
    {
        cout<<"find_string not exist "<<endl;
    }
    else{
        cout<<"find_string exist"<<endl;
    }


cout<<endl<<endl;



// 13 -> Compare (To compare two strings)

string B1 = {"Love Babbar"};
string B2 = {"Love Babbar "};

cout<<"13th COMPARING strings- ";

if(B1.compare(B2) == 0)
{
    cout<< "String is same"<<endl;
}
else{
    cout<<"String is different"<<endl;
}

cout<<endl<<endl;


// 14th -> Substring (To get specific part of string)

string strC1 = {"This is a big car, daddy of all cars"};

string strC2 = strC1.substr(10,7); // substr is utility function,  10 is the starting index and 7 is the no. of characters

cout<<"The SUBSTRING of string STRC1- "<<strC2<<endl;



cout<<endl<<endl;

return 0;

}