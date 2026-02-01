#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};

    gets(str);

    for(int i=0; str[i]; i++)
        freq[str[i]]++;

    for(int i=0;i<256;i++)
        if(freq[i])
            printf("%c = %d\n", i, freq[i]);

    return 0;
}
