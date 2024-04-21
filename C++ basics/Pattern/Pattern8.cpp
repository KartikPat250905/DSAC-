#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    int k = 1;

    cout<<"Enter a number:";
    cin >> n;

    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout << k << " ";
            k++;
            j++;
        }
        cout << "\n";
        i++;
    }
}