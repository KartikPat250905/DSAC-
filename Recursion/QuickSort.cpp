#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int Partition(vector<int> &arr,int s,int e)
{
    int pivot = arr[s];
    int count = 0;
    for(int i = s + 1;i<=e;i++)
    {
        if(arr[i] < pivot)
            count++;
    }
    int pivotindex = s + count;
    swap(arr[pivotindex],arr[s]);
    int i = s;
    int j = e;
    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<arr[pivotindex])
            i++;
        while(arr[j]>arr[pivotindex])
            j--;
        if(i<pivotindex && j>pivotindex)
            swap(arr[i++],arr[j--]);
    }
    return pivotindex;
}

void quickSort(vector<int> &arr,int s,int e)
{
    if(s>=e)
        return ;
    int p = Partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);

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
    quickSort(arr,0,6);
    printarray(arr,7);
}