#include <stdio.h>
#pragma pack(1)
struct abc{
    char a;
    int b;
    char c;
}var;

int main()
{
    printf("%d",sizeof(var));

    return 0;
}
