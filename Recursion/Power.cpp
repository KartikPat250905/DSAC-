#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int Power(int a,int b)
{
    if(b == 0)
        return 1;
    if(b == 1)
        return a;
    int ans = Power(a,b/2);
    if(b%2 == 0)
    {
        return ans*ans;
    }
    else
        return ans*ans*a;
}

int main()
{
    int a,b;
    printf("Enter base and power:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Answer is %d",Power(a,b));
}