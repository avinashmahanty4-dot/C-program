#include<stdio.h>
int main()
{
    char str[50], *start, *end, temp;

    gets(str);
    start = str;
    end = str;

    while (*end)
        end++;
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    puts(str);
    return 0;
}
