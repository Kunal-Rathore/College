

#include <iostream>
#include <vector>

using namespace std;
int x = 392;


int main(){

int x  =60;

:: x = 3;

cout<<x <<" "<< ::x <<endl;

{
    int y =23;
    x =32;
    :: x = 82;
    cout<<x <<" "<< ::x<< " Y- "<<y<<endl ;
    
}
cout<<x <<" "<< ::x ;

return 0;
}