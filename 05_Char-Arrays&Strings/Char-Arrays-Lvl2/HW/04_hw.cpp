
// String erase function


// GPT code ->

#include <iostream>

using namespace std;


void eraseString (string &str, int index, int length)
{
    if(index > str.length() || length == 0 || index +length > str.length())
    {
        return;
    }

    else{
      
        str  = str.substr(0, index) + str.substr(index+length, str.length());
    }
}





int main() {
 
        string str = "Hello, World";

        eraseString(str, 3,2);

        cout<<"String after eraseString is- "<<str<<endl;


    return 0;
}











// My approach - still used ai in resize 
/*
#include <iostream>
using namespace std;

void eraseString (string &str, int indexNo, int noOfchar)
{
    if(indexNo > str.length() ||noOfchar == 0|| indexNo+noOfchar >str.length()  )
    {
        return;
    }

else
{   while(indexNo+noOfchar < str.length())
    {
        str[indexNo] = str[indexNo + noOfchar];
        indexNo++;
    }
    str.resize(str.length() - noOfchar);
}

}


int main() {
 
  string str = "Hello, W";


  
  // str.erase(3,2);
  
  eraseString(str, 3,2);

  cout<<"String after using eraseString is- "<<str<<endl;

    return 0;
}


*/