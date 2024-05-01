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
        int j = n - i +1;
        while(j>=1)
        {
            cout << "*" << " ";
            j--;
        }
        i++;
        cout << "\n";
    }
}