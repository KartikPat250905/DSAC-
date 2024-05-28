#include <iostream>
using namespace std;

int First(int array[],int size,int key)
{
    int low = 0;
    int high = size - 1;
    int mid = low + (high - low) / 2;
    int ans = -1;

    while(low <= high)
    {
        if (array[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        } 
        else if (array[mid] > key)
            high = mid - 1;
        else if (array[mid] < key)
            low = mid + 1;
        mid = low + (high - low) / 2;
    }
    return ans;
}

int Last(int array[],int size,int key)
{
    int low = 0;
    int high = size - 1;
    int mid = low + (high - low) / 2;
    int ans = -1;

    while(low <= high)
    {
        if (array[mid] == key)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (array[mid] > key)
            high = mid - 1;
        else if (array[mid] < key)
            low = mid + 1;
        mid = low + (high - low) / 2;
    }
    return ans;
}

int main()
{
    int even[6] = {1,5,9,9,9,50};
    int odd[5] = {1,5,6,7,8};
    printf("%d\n",First(even,6,9));
    printf("%d",Last(even,5,9));
}