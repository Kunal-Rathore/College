

// babbar  <= string and target = a print index of target

#include <iostream>
#include <string>

using namespace std;

void findTarget(string s, char target, int index)
{
  if(s[index] == '\0')
  {
    return;
  }
      
  if(s[index] == target)
  {
    cout<< index<<" ";
  }
  findTarget(s,target, index+1);
  return;
}


int main() {
 
    string s = "babbar";

   char target = 'a';

  


findTarget(s, target, 0);

    return 0;
}