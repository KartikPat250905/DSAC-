#include <bits/stdc++.h>
#include <iostream>
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

void Merge(vector <int> &arr,int s,int e)
{
    int mid = s + (e - s)/2;
    for(int i = s;i<=e;i++)
    {
        InsertionSort(arr,e - s + 1,i);
    }
}

void MergeSort(vector <int> &arr,int s,int e)
{
    if(s>=e)
        return ;
    int mid = s + (e - s) / 2;
    MergeSort(arr,s,mid);
    MergeSort(arr,mid + 1,e);
    Merge(arr,s,e);
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
    MergeSort(arr,0,6);
    printarray(arr,7);
}