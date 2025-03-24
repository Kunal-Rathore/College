
// Vector is dynamic array which can grow and shrink automatically and contiguious memory allocation

#include <iostream>
#include <vector>
using namespace std;

void printVector (vector <int> vec)
{
  int size = vec.size();    // operation which gives size of vector

  for (int i= 0; i<size; i++){
     
    cout<<vec[i]<<" ";
  }
  cout<<endl;
  
}

int main() {


vector <int> vec;
    
vec.push_back(191);   // Instertion in vector
vec.push_back(192);


printVector(vec);

cout<<"Vec size is "<<vec.size()<<endl;

cout<<"Vec capacity is "<<vec.capacity()<<endl;

vec.push_back(193);

cout<<vec[2]<<endl;

cout<<"Vec size is "<<vec.size()<<endl;

cout<<"Vec capacity is "<<vec.capacity()<<endl;


// 191 -> 192 -> 193

vec.pop_back();   // Deletion in Vector from last

cout<<"After deletion of last element- ";
// 191 -> 192 
printVector(vec);
 


vec.clear();   // Complete deletion of vector

cout<<"After deletion of complete vector- ";
printVector(vec);

cout<<"Vector size- "<<vec.size()<<endl;


vec.push_back(90);
cout<<"Insert new element- ";
printVector(vec);

cout<<"Vector size- "<<vec.size()<<endl;

vec.pop_back();
printVector(vec);



cout<<"New- "<<endl<<endl;


vector <int> vec2; //empty vector

vector <int> vec3  = {-1,-2,-3,-4,-5}; //vector with 5 elements

cout<<"Vec3 size- "<<vec3.size()<<endl;
cout<<"Vec3 = "; 
printVector(vec3);


vector <int> vec4{1,2,3,4};
cout<<"Vec4 created- ";
printVector(vec4);



// How to copy vector -

vector <int> vecC1 {1,2,3,4,5};
cout<<"vecC1 is- ";
printVector(vecC1);
vector <int> vecC2(vecC1);
cout<<"VecC2 is copied from VecC1- ";
printVector(vecC2);



vec.clear();
vec2.clear();
vec3.clear();
vec4.clear();
vecC1.clear();
vecC2.clear();


cout<<endl;
  

vector <char> vecc;

vecc.push_back('a');
vecc.push_back('b');
vecc.push_back('c');

cout<<"Front- "<<vecc[0]<<endl;   
cout<<"Last- "<<vecc[vecc.size()-1]<<endl<<endl;


vecc.pop_back();
cout<<"Using operators of front and back- "<<endl;
cout<<"Front- "<<vecc.front()<<endl;  // print the front element of vecc
cout<<"Back - "<<vecc.back()<<endl;   // print the last element of the vecc


// Native way to print vector-

for(auto i: vecc )
{
  cout<<i<<" ";
}


}
