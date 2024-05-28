#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int Sumarr(int arr[],int size)
{
    if(size == 1)
        return arr[0];
    return arr[0] + Sumarr(arr+1,size-1);
}

int main()
{
    int arr[] = {2,5,6,7,8,9};
    printf("%d",Sumarr(arr,6));
}