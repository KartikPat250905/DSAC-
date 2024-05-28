#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;


void printarray(vector<int> &arr,int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 0;i<(n - 1);i++)
    {
        for(int j = i + 1;j<n;j++)
        {
            if(arr[i] > arr[j])
                swap(arr[i],arr[j]);
        }
        printarray(arr,7);
    }
}

void Realbubblesort(vector<int>&arr,int n)
{
    for(int i = 1;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

int main()
{
    vector<int> arr = {5,2,1,6,8,10,9};
    bubbleSort(arr,7);
}