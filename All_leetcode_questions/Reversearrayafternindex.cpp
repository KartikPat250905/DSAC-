#include <vector>
#include <iostream>
using namespace std;
void reverseArray(vector<int> &arr , int m)
{
    int s;
    s = m + 1;
    if(m + 1 == arr.size())
        return ;
    int e = arr.size() - 1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }       	
}