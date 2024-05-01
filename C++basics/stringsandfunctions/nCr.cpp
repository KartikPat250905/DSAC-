#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0)
        return 1;
    int ans = 1;
    int i = 1;
    while(i<=n)
    {
        ans = ans * i;
        i++;
    }
    return ans;
}

int nCr(int n , int r)
{
    if(r == 0)
        return 1;
    int ans = ((factorial(n))/(factorial(r) * factorial(n-r)));
    return ans;
}

int main()
{
    cout << nCr(5,1) << endl;
}