#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;

    cout<<"Enter a number:";
    cin >> n;
    char k = 65;

    while(i<=n)
    {
        int j = 1;

        while(j<=n)
        {
            cout << k << " ";
            j++;
            k++;
        }
        i++;
        cout << "\n";
    }
}