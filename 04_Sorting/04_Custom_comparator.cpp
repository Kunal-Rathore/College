

// Custom comparator are user defined function having bool as return type used to sort in required format through stl sort function

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void printVec1(vector <vector <int> > &vec1)
{
    for(int i = 0; i< vec1.size(); i++)
    {
        vector <int> temp = vec1[i];
        int a,b;
        a = temp[0];
        b = temp[1];
        cout<<a<< " "<< b<<endl;
    }
}



bool mycomp(int &a, int &b)
{
    return a>b;  // decreasing order sorting
}


// My comparator for vector vector sorting

bool mycomp2(vector <int> &a, vector <int> &b)
{
    return a[1]>b[1];
}




int main() {
 
    vector <int> vec = { 1,2,8,5,3,4};

    sort(vec.begin(), vec.end(), mycomp);
    cout<<"Vec after sort- ";
   
    for(auto i: vec)
    {    
    cout<<i<<" ";
    }

cout<<endl;




 
vector <vector <int> > vec1;

cout<<"Enter the no. of vectors- ";
int n;
cin >>n;

  // Inputing each vector
for(int i=0; i< n; i++)
{
    vector <int> temp;
    int a,b;
    cout<<"Enter a and b- "<<endl;
    cin >>a>>b;

    temp.push_back(a);
    temp.push_back(b);

    vec1.push_back(temp);
}


//printing vec1-
cout<<"Vec1 is- "<<endl;
printVec1(vec1);


//printing vec1 after 1st index sort
cout<<"Vec1 after 1st Index sort is- "<<endl;

sort(vec1.begin(), vec1.end(), mycomp2);
printVec1(vec1);


return 0;
}