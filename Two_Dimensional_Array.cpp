#include <iostream>

using namespace std;

int matrix[6][6];

int main()
{
    // asigning values, I suppose this is done allready.

    for(int x=0;x<6;x++)
    {
        for(int y=0;y<6;y++)
        {
            matrix[x][y]=1;
        }
    }

    // OR
    // an array with 3 rows and 2 columns.
    // int matrix[3][2] = {{0,1}, {2,3}, {4,5}};

    // showing the matrix on the screen

    for(int x=0;x<6;x++)  // loop 3 times for three lines
    {
        for(int y=0;y<6;y++)  // loop for the three elements on the line
        {
            cout<<matrix[x][y];  // display the current element out of the array
        }
    cout<<endl;  // when the inner loop is done, go to a new line
    }
    return 0;  // return 0 to the OS.
}