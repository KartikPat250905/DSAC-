#include <iostream>
using namespace std;

int main()
{
    cout << "Enter any number" << endl;
    int n ;
    cin >> n;
    bool isPrime = 1;

    for (int i = 2; i<n;i++)
    {
        if(n%i == 0)
        {
            isPrime = 0;
            cout << "Not a prime number" << endl;
        }
    }
    if(isPrime == 0)
    {
        cout << "Not a prime number";
    }
    else
    {
        cout << "Is a prime number";
    }
}