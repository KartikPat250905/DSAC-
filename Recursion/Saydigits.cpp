#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

void Saydigit(int n, string arr[])
{
    if(n == 0)
        return ;
    int val = n % 10;
    n = n /10;
    Saydigit(n,arr);
    cout << arr[val] << " ";
}

int main()
{
    int n;
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    printf("Enter the number:");
    scanf("%d",&n);
    Saydigit(n,arr);
}