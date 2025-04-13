

//  include and exclude

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void iE(string str, string op, int index, vector <string> &ans)
{
    // base case
    if(index >= str.length())
    {
        ans.push_back(op);
         return;
    }

    // include
    op.push_back(str[index]);

  iE(str, op,index+1, ans);
  
  // exclude
  op.pop_back();

   iE(str,op, index+1, ans);

}


int main() {
     string str  = {"abc"};
string op = {""};

vector <string> ans;
    iE(str, op, 0 , ans);

    cout<<"Printing ans-\n";

    for(auto i: ans)
    {
        cout<<"=>"<<i<<endl;
    }

    return 0;
}