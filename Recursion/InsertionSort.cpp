#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector <int> &arr,int n, int c)
{
    if(c > n -1)
        return ;
    int key = arr[c];
    int i = c - 1;
    for(;i >= 0 ;i--)
    {
        if(arr[i] > key)
            arr[i+1] = arr[i];
        else
            break;
    }
    arr[i+1] = key;
    InsertionSort(arr,n,c+1);
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
    InsertionSort(arr,7,1);
    printarray(arr,7);
}