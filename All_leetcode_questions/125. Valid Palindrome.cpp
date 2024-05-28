#include <string>
using namespace std;
class Solution {
private:

    bool isValid(char c)
    {
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c<='9'))
            return 1;
        return 0;
    }
    char tolower(char c)
    {
        if(c >= 'A' && c <= 'Z')
            return c + 32;
        return c;
    }
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0;i < s.length();i++)
        {
            if(isValid(s[i]))
            {
                temp += tolower(s[i]);
            }
        }
        int st = 0;
        int e = temp.length() -1 ;
        while(st<e)
        {
            if(temp[st] != temp[e])
                return false;
            st++;
            e--;
        }
        return true;
    }
};