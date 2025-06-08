
#include <iostream>
#include <vector>

using namespace std;



// possiblities to check
// 1) is open path, 2) is outofbound, 3) is visited

bool isSafe(vector <vector<int>> maze,int row, int col, int newx,int newy, vector <vector <bool> > &visited)
{
       if((newx >= 0 && newx < row) && (newy>=0 && newy < col) && maze[newx][newy] == 1 && visited[newx][newy]==false)
       {

        return true;
       }

    return false;
}


void printWays(vector <vector <int> > maze,int row, int col, int srcx,int srcy, string &output, vector <vector <bool> > &visited)
{
         if(srcx == row-1 && srcy == col-1)
         {
            cout<<output<<endl;
            return;
         }

         // solve one case then recursion for each side

         // up
         int newx = srcx-1;
         int newy = srcy;
         if(isSafe(maze, row, col,newx, newy, visited))
         { 
            // mark visited
            visited[newx][newy] = true;
            output.push_back('u');

            //recursion
            printWays(maze,row,col,newx,newy, output,visited);

            // backtracking
            output.pop_back();
            visited[newx][newy] = false;

         }

         // down
         newx = srcx+1;
          newy = srcy;
         if(isSafe(maze, row, col,newx, newy, visited))
         { 
            // mark visited
            visited[newx][newy] = true;
            output.push_back('d');

            //recursion
            printWays(maze,row,col,newx,newy, output,visited);

            // backtracking
            output.pop_back();
            visited[newx][newy] = false;

         }

          // right
          newx = srcx;
          newy = srcy+1;
         if(isSafe(maze, row, col,newx, newy, visited))
         { 
            // mark visited
            visited[newx][newy] = true;
            output.push_back('r');

            //recursion
            printWays(maze,row,col,newx,newy, output,visited);

            // backtracking
            output.pop_back();
            visited[newx][newy] = false;

         }

          // left
          newx = srcx;
          newy = srcy-1;
         if(isSafe(maze, row, col,newx, newy, visited))
         { 
            // mark visited
            visited[newx][newy] = true;
            output.push_back('l');

            //recursion
            printWays(maze,row,col,newx,newy, output,visited);

            // backtracking
            output.pop_back();
            visited[newx][newy] = false;

         }
}



int main(){

vector <vector <int> > maze ={{1,0,0,0},{1,1,0,0},{1,1,1,0},{1,1,1,1}};

int row = maze.size();
int col = maze[0].size();

string output = "";

int srcx = 0,srcy = 0;

vector <vector <bool> > visited (row, vector<bool> (col,false));

if(maze[0][0]==0)
{
    cout<<"No possible ways\n";
}
else{
    printWays(maze,row,col,srcx,srcy,output,visited);
}

return 0;
}