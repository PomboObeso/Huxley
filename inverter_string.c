#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char c,name[255];
    scanf("%s", name);
    int size = strlen(name);
    for(i = size; i >= 0; i--)
    {
        c = name[i];
        printf("%c",c);
    }
    return 0;
}
