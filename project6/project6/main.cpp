
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[4] = { 0, 1, 2, 3 };
 int* ptr = arr;
*ptr = arr[ 1 ];               // set arr[0] to 1
 *(ptr + 1) = arr[ 0 ] * 10;      // set arr[1] to 10
            ptr += 2;
            ptr[0] = arr[ 1 ] * 10;        // set arr[2] to 100
            ptr[1] = 1000;                 // set arr[3] to 1000
            while (ptr  >= arr)
                {
                        cout << " " << *ptr;    // print values
            ptr- -;
                    }
            cout << endl; 
            return( 0 ); 
    
}
