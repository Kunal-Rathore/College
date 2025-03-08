
// Vector -> Vector is a kind of array which has dynamically memory allocation, it also behave as array but it has 'size' and 'capacity'.

#include <iostream>
#include <vector>

using namespace std;

// Function to print a vector
void printVector(vector<int> vec)
{
  for (auto i : vec)
  {
    cout << i << " ";
  }
  cout << endl;
}

int main()
{
  // Declaration and initialization of vectors
  vector<int> vec1;
  vector<int> vec2 = {1, 2, 3, 4, 5};

  // Adding elements to a vector
  vec1.push_back(10);
  vec1.push_back(20);
  vec1.push_back(30);
  vec1.push_back(40);

  // Printing vectors
  cout << "Vector 1: ";
  printVector(vec1);
  cout << "Vector 2: ";
  printVector(vec2);

  // Removing elements from a vector
  vec1.pop_back();
  vec2.clear();

  // Printing vectors after removal
  cout << "Vector 1 after removal: ";
  printVector(vec1);
  cout << "Vector 2 after removal: ";
  printVector(vec2);

  // Accessing elements in a vector
  int element = vec1[0];
  cout << "Element at index 0: " << element << endl;

  // Getting vector size and capacity
  int size = vec1.size();
  int capacity = vec1.capacity();
  cout << "Vector size: " << size << endl;
  cout << "Vector capacity: " << capacity << endl;

  // Copying a vector
  vector<int> vec3(vec1);
  cout << "Vector 3 (copy of Vector 1): ";
  printVector(vec3);

  return 0;
}