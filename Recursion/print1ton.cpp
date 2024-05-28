#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void Printer(int n)
{
    if(n == 0)
        return;
    Printer(n-1);
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    Printer(n);
}