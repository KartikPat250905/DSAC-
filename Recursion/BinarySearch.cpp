#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int BinarySearch(int arr[],int start,int end,int key)
{
    if (start > end)
        return -1;
    int mid = start + (end - start) /2;
    if(arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return BinarySearch(arr,start,mid -1 ,key);
    else
        return BinarySearch(arr,mid +1,end,key);
}   

int main()
{
    int arr[] = {2,5,6,7,8,9};
    printf("%d",BinarySearch(arr,0,5,8));
}