#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter something:"<< endl;
    cin >> ch;
    
    if(ch>='a' && ch<='z')
    {
        cout << "The given character is a lowercase";
    }
    else if(ch >= 'A' && ch<='Z')
    {
        cout << "The given character is a uppercase";
    }
    else if(ch>='0' && ch<='9')
    {
        cout << "The given character is numeric";
    }
}