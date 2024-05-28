#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void Printer(int n)
{
    if(n == 0)
        return;
    cout << n << " ";
    Printer(n-1);
}

int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    Printer(n);
}