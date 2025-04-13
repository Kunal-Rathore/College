

// coinchange leet code 322

// input coins = [1,2,5] 
// amount = 11
// minimum coin?

#include <iostream>
#include <climits>

using namespace std;

int findMin(int coins[],int size,int amount)
{
          if(amount == 0)
          {
            return 0;
          }
        if(amount < 0)
        {
            return INT_MAX;
        }

        int mini  = INT_MAX;
          for(int i= 0; i< size; i++)
          {       
            int coin = coins[i];
            
            if(coin<= amount){
           int recAns =  findMin(coins, size,amount-coin);
           if(recAns != INT_MAX)
           {
            int ans = 1+recAns;
           mini = min(ans, mini);
           }
 
        }
          }

          return mini;
}


int main() {
 
    int coins[] = {1,2,5};
    int amount = 11;
    int size = 3;

    int minCoin = findMin(coins,size,amount);
cout<< minCoin;
    return 0;
}