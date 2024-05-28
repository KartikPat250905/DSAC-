#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, flag, count = 1;
    printf("Please enter the number = ");
    scanf("%d", &num);

     for (i = 1; i < num; i++)
    {
        int j = 2;
        while (j < i)
        {
            flag = 1;
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
            else
            {
                j++;
            }
        }
        if (flag == 1)
            count++;
    }
    printf("%d\n", count);
}