#include <iostream>
using namespace std;

int Pivotfinder(int arr[] , int size)
{
    int s = 0;
    int e = size - 1;
    int mid = (e +s) / 2;
    while(s<e)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid +1;
        }
        else 
            e = mid;
        mid = (e + s)/2;
    }
    return s;
}

int main()
{
    int array[] = {7,9,1,2,3};//1,2,3,7,9
    printf("Pivot is %d",Pivotfinder(array,5));
}