#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> mul(vector<vector<int>> a,vector<vector<int>> b)
{
    int n=a.size();
    int k=a[0].size();
    int m=b[0].size();
    vector<vector<int>> c(n,vector<int> (m,0));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[i][j]=0;
            for(int m=0;m<k;m++)
            {
                c[i][j]+=(a[i][m]*b[m][j]);
            }
        }
    }
    
    return c;
}

int main() {
    vector<vector<int>> l={{2,4},{3,4}};
    vector<vector<int>> r={{1,2},{1,3}};
    vector<vector<int>> m;
    m=mul(l,r);
    
    for(int i=0;i<m.size();i++)
    {
        for(int j=0;j<m[i].size();j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<vector<int>> p = {{1,2,3},{1,2},{1},{1,2,3,4}};
    int res = p.size();
    cout << "p: " << res << endl;
    
    return 0;
}
