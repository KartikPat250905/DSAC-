#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int row;
    int col = 0;
    cout << "Enter no.of rows" << endl;
    cin >> row;
    int val;
    int **arr = new int *[row];
    for(int i = 0;i<row;i++)
    {
        cout <<"Enter no of elements" << endl;
        cin >> col;
        arr[i] = new int[col];
        for(int j= 0;j<col;j++)
        {
            cout << "Enter element " << j+1 <<":";
            cin >> val;
            arr[i][j] =val; 
        }
        cout << endl;
    }
    //print the array
    for(int i = 0;i<row;++i)
    {
        for(int j = 0;j<col;++j)
        {
            cout<<arr[i][j] << " ";
        }
        cout <<endl;
    }
    //free the array
    for(int i =0;i<row;i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
}