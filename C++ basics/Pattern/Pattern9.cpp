#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;

    cout<<"Enter a number:";
    cin >> n;

    /*
    while(i<=n)
    {
        int k = i;
        int j = 1;
        while(j<=i)
        {
            cout << k << " ";
            j++;
            k++;
        }
        cout << "\n";
        i++;
    }*/
    while(i<=n)
    {
        int j = i;
        while(j<=(i+i-1))
        {
            cout << j << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
}