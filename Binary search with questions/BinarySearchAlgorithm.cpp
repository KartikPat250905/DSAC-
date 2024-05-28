#include <iostream>
using namespace std;

int Binarysearch(int array[],int size,int key)
{
    int low = 0;
    int high = size - 1;
    int mid = low + (high - low) /2;
    while (low <= high)
    {
        if(array[mid] == key)
            return mid;
        if(array[mid] > key)
        {
            high = mid - 1;
        }
        else if (array[mid] < key)
        {
            low = mid + 1;
        }
        mid = low + (high - low) /2;
    }
    if(mid == key)
    {
        return mid;
    }
    return -1;
}

int main()
{
    int even[6] = {1,5,9,15,45,50};
    int odd[5] = {1,5,6,7,8};
    printf("%d\n",Binarysearch(even,6,9));
    printf("%d",Binarysearch(odd,5,1));
}