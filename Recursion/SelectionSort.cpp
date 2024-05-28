#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <vector>

void SelectionSort(vector <int> &arr,int n,int c)
{
    if(c > n - 1)
        return ;
    int min = c;
    for(int i=c+1;i<n;i++)
    {
        if(arr[i] < arr[min])
            min = i;
    }
    swap(arr[min],arr[c]);
    SelectionSort(arr,n,c +1);
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
    SelectionSort(arr,7,0);
    printarray(arr,7);
}