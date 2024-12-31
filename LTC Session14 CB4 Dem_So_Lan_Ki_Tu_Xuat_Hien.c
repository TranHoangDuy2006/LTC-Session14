#include <stdio.h>

#include <string.h>

int main ()
{
    char str[] = "RIKKEI";

    int size = strlen(str);

    int findValue, count = 0;

    printf("\nNhap vao ki tu ma ban muon biet so lan xuat hien: ");

    scanf("%c", &findValue);

    for(int i = 0; i < size; i++)
        {
            if(str[i] == findValue) 
                {
                    count++;
                }
        }

    if(count > 0)
        {
            printf("\nSo lan xuat hien cua phan tu %c la: %d", findValue, count);

            printf("\n\n");
        }
            else    
                {
                    printf("\nPhan tu %c khong xuat hien trong mang!", findValue);

                    printf("\n\n");
                }
}