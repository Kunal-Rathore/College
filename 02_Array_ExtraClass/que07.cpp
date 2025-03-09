/*
Problem Statement
Rotate Image

Given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise) in-place.

Examples:

Example 1: Input: matrix = [[1,2,3],[4,5,6],[7,8,9]] Output: [[7,4,1],[8,5,2],[9,6,3]]

Example 2: Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]] Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]


LeetCode - https://leetcode.com/problems/rotate-image/description/



*/




#include <iostream>
#include <vector>

using namespace std;

void swapArr(vector <int> &arr )
{
    int size = arr.size();
    int row = 0;
    int col = size-1;

    while(row<col)

    {
        swap(arr[row],arr[col]);

        row++;
        col--;
    }
}

void rightSwapArr(vector<vector<int>> &arr)
{
    int sizeArr = arr.size();

    for (int row = 0; row < sizeArr; row++)
    {
        for (int col = row; col < arr[row].size(); col++)
        {
           
                swap(arr[row][col], arr[col][row]);
           
        }
    }
for(int i =0; i<sizeArr ; i++)
{
   swapArr(arr[i]);
}
    // here we can use reverse predefined function-
    /* for(int i= 0; i<sizeArr; i++){
     reverse(arr[i].begin(), arr[i].end());}    */

   
}

int main()
{

    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    rightSwapArr(arr);

    cout << "After right swapping arr is- " << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}