#include <stdio.h>

#include <string.h>

int main ()
{
    char str[] = "N24DTCN021";

    int size = strlen(str);

    int countDigitIsWord = 0;

    for(int i = 0; i < size; i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
                {
                    countDigitIsWord++;
                }
        }

    printf("\nSo ki tu la chu cai xuat hien trong chuoi la: %d", countDigitIsWord);

    printf("\n\n");

    return 0;
}