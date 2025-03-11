/*
Problem statement- 
 Search a 2D Matrix

 You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

*/



// Leetcode -> https://leetcode.com/problems/search-a-2d-matrix/description/





#include <iostream>
#include <vector>

using namespace std;



 bool findTarget (vector <vector <int> > &arr, int target)
{
    int rowsize = arr.size();
    int colsize = arr[0].size();

    int total_size = rowsize * colsize;  //to set end

    int start =0;
    int end =  total_size -1;

    int mid = start +(end - start)/2;

    while(start <= end)
    {
        int rowIndex = mid/colsize;  //converts index mid into 2-D index as row and col
        int colIndex = mid%colsize;
        
        int element = arr[rowIndex][colIndex];
        
        if(element == target)
        {
            return true;
        }

        else if(target>element)
        {
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        mid  = start +(end-start)/2;
    }
    return false;
}



int main() {
 
    vector <vector <int> > arr = {{2,3,4,5}, {6,7,8,9}, {10,11,13,14}};
    
  int target = 1;

  bool checkTarget =  findTarget(arr,target);
 


 if (checkTarget == false)
 {
    cout<<"Target not exist"<<endl;
 }
 else{
    cout<<"Target exist"<<endl;
 }

    return 0;
}

