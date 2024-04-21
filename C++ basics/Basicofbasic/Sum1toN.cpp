#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n ;
    cout << "Enter  N:" << endl;
    cin >> n;
    int sum = 0;
    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    cout << "The sum from 1 to n is " << sum << endl;
}