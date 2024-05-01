#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;

    cout<<"Enter a number:";
    cin >> n;
    
    while(i<=n)
    {
        int k = n - i;
        while(k >= 1)
        {
            cout << " " << " ";
            k--;
        }
        int j = 1;
        while(j<=i)
        {
            cout << j << " ";
            j++;
        }
        if(i >= 2)
        {
            int j = 1;
            int k = i -1;
            while(j<=i-1)
            {
                cout << k << " ";
                k--;
                j++;
            }
        }
        i++;
        cout << "\n";
    }
}