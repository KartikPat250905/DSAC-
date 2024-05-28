#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isSorted(int arr[] , int size)
{
    if (size == 0 || size == 1)
        return true;
    if(arr[0] > arr[1])
        return false;
    else
    {
        bool ans = isSorted(arr+1,size-1);
        return ans;
    }
}

int main()
{
    int arr[] = {2,5,6,7,8,9};
    printf("%d",isSorted(arr,6));
}