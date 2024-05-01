#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    int k = 1;

    cout<<"Enter a number:";
    cin >> n;

    // while(i<=n)
    // {
    //     int j = i;
    //     while(j+i-1 >= i)
    //     {
    //         cout << j << " ";
    //         j--;
    //     }
    //     cout << "\n";
    //     i++;
    // }

    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout << i-j+1 << " ";
            j++;
        }
        i++;
        cout << "\n";
    }
}