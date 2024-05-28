#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void Reverse(char *arr,int start, int end)
{
    if(start>end)
        return;
    swap(arr[start],arr[end]);
    start++;
    end--;
    Reverse(arr,start,end);
}

int main()
{
    char arr[] = "Hello";
    Reverse(arr,0,4);
    printf("%s",arr);
}