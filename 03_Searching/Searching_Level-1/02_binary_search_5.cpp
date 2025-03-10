


  // Imp que, 5-> Find missing element using binary search or in Log n time complexity or in sorted array


  #include <iostream>
  #include <vector>

  using namespace std;


  int find_Missing_using_Binary_search(vector <int> &arr)
  {
    int start =0;
    int end = arr.size()-1;
    
    int mid = start  + (end-start)/2;
    int ans= arr.size()+1;    // when at last index element is missing then the size of array will be the ans+1.



    while(start<= end)
      {
        if(arr[mid] - mid == 1)
        {
          start = mid+1;
        }
        else if(arr[mid] - mid != 1)
        { 
          ans = mid+1; 
          end = mid-1;
        }
      

        mid = start + (end -start)/2;
      }

      return ans;

  }


  int main() {
  

      vector <int> arr = {1,2,3,4,5,6,7,8}; // given sorted array

      int missingElement = find_Missing_using_Binary_search(arr);

      cout<<"Missing element is- "<<missingElement<<endl;
      return 0;
  } 