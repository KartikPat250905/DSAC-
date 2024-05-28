#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();;
    for(int i = 0;i<row-1;i++)
    {
        for(int j = 0;j<col-1;)
        {
            if(i == j && (j+1 != col-1))
            {
                j++;
                continue;
            }   
            swap(matrix[i][j],matrix[j][i]);
            j++;
        }
    }
    for(int i= 0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix;
    matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
}