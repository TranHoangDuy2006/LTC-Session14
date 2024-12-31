#include <stdio.h>

int main ()
{
    char str[] = "Tran Hoang Duy";
    
    int countWord = 0;

    int inWord = 0;

    for(int i = 0; str[i] != '\0'; i++)
        {
            if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
                {
                    inWord = 0;
                }
                    else
                        {
                            if(inWord == 0)    
                                {
                                    countWord++;

                                    inWord = 1;
                                }
                        }
        }

    printf("\nSo tu co trong chuoi la: %d", countWord);

    printf("\n\n");

    return 0;
}