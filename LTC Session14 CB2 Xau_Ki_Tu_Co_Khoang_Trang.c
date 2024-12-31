#include <stdio.h>

int main ()
{
    char str[] = "TranHoangDuy";

    printf("\nChuoi ki tu sau khi moi ki tu cach nhau mot khoang trong:\n\n ");

    for(int i = 0; str[i] != '\0'; i++)
    {
        printf("%c ", str[i]);
    }

    printf("\n\n");

    return 0;
}