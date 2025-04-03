
#include <iostream>
#include <vector>
#include <algorithm> // max_element() ke liye required hai
#include <numeric> // for accumulate 

using namespace std;

bool isPossible(vector <int> books, int m, int mid)
{
    int student = 1; int sumpages = 0; // to check whether allocation of pages are possible till m students or not

    for(int pages: books)
    {
        if(sumpages + pages <= mid) // means is it possible to allocate next pages to the student 
        {
            sumpages += pages;
        }
        // if not possible then allocate to next student
        else
        {
            student++; // allocating next student
            sumpages = pages; // and allocate that pages to the next student

            if(student > m)  // if student are more required then need to increase mid (mini. max. pages)
            {
                return false;
            }
        }
    }
    return true;  //means possible so that mid may be ans or more less mid can be possible
}




int findMiniMaxPages(vector <int> &books, int m)
{
    // defining range for minimum pages a student must have and at max a student can have

    int low = *max_element(books.begin(), books.end()); // the maximum value will be value which a student must have at best

    int high = accumulate(books.begin(), books.end(), 0);  // gives total pages which a student can have at worst

    // then binary search applying to get the no. of minimum no. of maximum pages
int result = -1;
    while(low <= high)
    {
        int mid = low + (high-low)/2;      // mid is the no. of pages trying to allocate each student

        if(isPossible(books, m, mid)) // if mid pages are allocated to all or less students then it may be the minimum max pages or either more minimum pages allocation possible 
        {
            result = mid; // allocated mid no. of pages
            high = mid-1; // may be more less pages possible to allocate

        }

        else{
            low = mid+1;       // only trigger when pages are not allocated to all m students  so required to increase no. of pages
        }
    }

    return result;    
}










int main() {
 
    vector <int> books = {10,20,30,40,50};
    int m = 3; // student

    int mini_max_pages = findMiniMaxPages(books,m);

    cout<<"The student have minimum at max pages are- " << mini_max_pages<<endl;

    return 0;
}