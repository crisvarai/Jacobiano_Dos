// CPP program
#include <iostream>
#include <vector>

using namespace std;

int n = 4;
int m = 4;

vector<vector<int>> mat(vector<int> a) {
	vector<vector<int>> arr(n, vector<int> (m));
	arr = {{a[0],a[1],a[2],a[3]}, 
	       {a[4],a[5],a[6],a[7]}, 
		   {a[8],a[9],a[10],a[11]},
		   {0,0,0,1}};
    return arr;
}

int main()
{
	/*
	Create a vector containing "n"
	vectors each of size "m".
	*/
    vector<int> parseo = {1,2,3,4,5,6,7,8,1,2,3,4};
	vector<vector<int>> pose;

    pose = mat(parseo);

	// vector<vector<int>> vec( n , vector<int> (m));

	// for(int i = 0; i < n; i++)
	// {
	// 	for(int j = 0; j < m; j++)
	// 	{
	// 		vec[i][j] = j + i + 1;
	// 	}
	// }

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout << pose[i][j] << " ";
		}
		cout << endl;
	}
	
    return 0;
}
