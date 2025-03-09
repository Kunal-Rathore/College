
/*Problem Statement

Row with Maximum Ones

Given a m x n binary matrix mat, find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row.

Examples:

Example 1: Input: mat = [[0,1],[1,0]] Output: [0,1]

Example 2: Input: mat = [[0,0,0],[0,1,1]] Output: [1,2]

Example 3: Input: mat = [[0,0],[1,1],[0,0]] Output: [1,2]

LeetCode - https://leetcode.com/problems/row-with-maximum-ones/description/

*/


#include <iostream>
#include <vector>
using namespace std;

void give_Max_One_Row(vector<vector<int>> &arr)
{
    vector<int> ans; // not a 2-D array cause we need to print first the row no then no. of columns directly from 1-D (single) array

    int rowSize = arr.size(); // To traverse each row

    int count = 0; // Need to initialize with INT_MIN later

    int rowNo = 0; // To store row No. having max one's

    for (int i = 0; i < rowSize; i++)
    {
        int countOne = 0; // counting one's in each row

        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i][j] == 1)
            {
                countOne++;
            }
        }

        if (count < countOne)
        {
            count = countOne;
            rowNo = i;
        }
    }

    ans.push_back(rowNo);
    ans.push_back(count);

    for (auto i : ans)
    {
        cout << i << " ";
    }
}

int main()
{

    vector<vector<int>> arr = {{0, 1, 0, 0}, {1, 1, 1, 1}, {0, 0, 1, 1}};

    give_Max_One_Row(arr);

    return 0;
}

/*Practicing one more time- */

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> checkMax(vector<vector<int>> &arr)
// {
//     int rowSize = arr.size();

//     int countOne = 0;

//     int countRow;

//     vector<int> ans;

//     for (int i = 0; i < rowSize; i++)
//     {
//         int tempCount = 0;
//         for (int j = 0; j < arr[i].size(); j++)
//         {

//             if (arr[i][j] == 1)
//             {
//                 tempCount++;
//             }
//         }

//         if (countOne < tempCount)
//         {
//             countOne = tempCount;
//             countRow = i;
//         }
//     }

//     ans.push_back(countRow);
//     ans.push_back(countOne);

//     return ans;
// }

// int main()
// {

//     vector<vector<int>> arr = {{0, 0, 1, 0}, {0, 0, 0, 0}, {1, 1, 1, 0}};

//     vector<int> ans = checkMax(arr);

//     for (auto i : ans)
//     {
//         cout << "[" << i << "] ";
//     }

//     return 0;
// }
