#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>&arr,int n)
{
    if(n == 0 || n == 1)
        return ;
    for(int i = 0;i<n-1;i++)
    {
        if(arr[i] > arr[i + 1])
            swap(arr[i],arr[i+1]);
    }
    return bubbleSort(arr,n-1);
}

void printarray(vector<int> &arr,int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    vector<int> arr = {5,2,1,6,8,10,9};
    bubbleSort(arr,7);
    printarray(arr,7);
}