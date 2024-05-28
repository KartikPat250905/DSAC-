#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool LinearSearch(int arr[],int size,int key)
{
    if(size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        return LinearSearch(arr+1,size-1,key);
    }
}

int main()
{
    int arr[] = {5,6,4,7,2,1,0,5,6};
    printf("%d",LinearSearch(arr,9,25));
}