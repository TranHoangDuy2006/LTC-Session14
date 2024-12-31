#include <stdio.h>

#include <string.h>

void reverseString(char str[]) 
{
    int n = strlen(str); 
    
    for (int i = 0; i < n / 2; i++) 
    {
        
        char temp = str[i];
        
        str[i] = str[n - i - 1];
        
        str[n - i - 1] = temp;
    }
}

int main() 
{
    char str[100];

    printf("\nNhap mot chuoi bat ky: ");
    
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    reverseString(str);

    printf("\nChuoi dao nguoc: %s\n\n", str);

    return 0;
}