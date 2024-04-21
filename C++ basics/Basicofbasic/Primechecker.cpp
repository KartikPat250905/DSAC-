#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number :"<< endl;
    cin >> n;
    int i = 2;
    int bol = 1;
    while (i < n)
    {
        if(n%i == 0)
        {
            bol = 0;
        }
        i++;
    }
    if (bol == 1)
    {
        cout << "The given number is prime";
    }
    else
    {
        cout << "The given number is not a prime number";
    }
}