#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n ;
    cout << "Enter the number till where the program needs to print :" << endl;
    cin >> n;
    while(i<=n)
    {
        cout << i << " ";
        i++;
    }
}