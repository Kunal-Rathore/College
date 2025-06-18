

// yes ctor can be private but doesn't initialized values
// use case-> we can't create an empty objects


#include <iostream>
#include <vector>

using namespace std;

class BoxT;

class Box{
    int width;
    
    Box(int w):width(w){}

    public:

    void getData(){
        cout<<"Width- "<<width<<endl;
    }
    
    friend BoxT;

};

class BoxT{
    public:

    Box setBox(int w)
    {
       return Box(w);  
    }
    
};



int main(){

BoxT b;

Box a = b.setBox(2);

a.getData();

return 0;
}