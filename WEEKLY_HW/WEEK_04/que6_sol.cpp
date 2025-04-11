// painters partition for minimum max time 


#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>



using namespace std;

bool isPossible(vector <int> house_boards, int mid, int painters)
{
    int painter = 1,sumTime  = 0;

    for(int time: house_boards)
    {
        if(time + sumTime <= mid)
        {
           sumTime = time+sumTime;
        }
        else{
            painter++;
             sumTime = time;
             if(painter > painters)
             {
                return false;
             }
        }
    }
    return true;
}

int findMiniMaxTime(vector<int> house_boards, int paintersk)
{
    int noofBoards = house_boards.size();
    if(paintersk > noofBoards)
    {
        return -1;
    }

// finding at search space

int start  = *max_element(house_boards.begin(), house_boards.end());  // in best case we need atleast the time required to paint the max lengthed board

int end = accumulate(house_boards.begin(), house_boards.end(),0); // at worst case we need to paint all the boards by one painter so adding all

// applying binarysearch
int result = 0;
while(start < end)
{
    int mid = start +(end-start)/2;
    if(isPossible(house_boards,mid, paintersk))
    {
        result = mid;
        end  = mid;
    }
    else{
        start = mid+1;
    }
}


return result;
    

}

int main()
{
   vector <int> house_boards = {10,20,30,40};
    int paintersk = 2;
    
    int min_max_time = findMiniMaxTime(house_boards, paintersk);
cout<<"The minimum max time required is- "<<min_max_time << endl; 
} 