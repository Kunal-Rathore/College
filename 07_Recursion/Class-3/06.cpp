
// Robbers House


#include <iostream>
using namespace std;

int findMax(int moneyHouse[], int size,int index)
{
    if(index >= size)
    {
        return 0;
    }

    int option1 = moneyHouse[index] + findMax(moneyHouse, size, index+2); // check 0,2 ,4....
    int option2 = 0 + findMax(moneyHouse,size, index+1); // check 1 ,3 ,5....

    int maxi = max(option1,option2);

    return maxi;
}


int main() {
 
        int moneyHouse[] = {2,4,15,7,3};
        
        int size = 5;

     int maxMoney = findMax(moneyHouse,size, 0);

     cout<< maxMoney;

    return 0;
}