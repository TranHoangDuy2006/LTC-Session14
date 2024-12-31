#include <stdio.h>

#include <string.h>

int main ()
{
    char str[100];
    
    printf("\nNhap vao xau ki tu cua ban: ");
    
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    
    printf("\nXau ki tu ban vua nhap la: %s", str);
    
    printf("\n");
    
    printf("\nDo dai xau ki tu ban vua nhap la: %d ki tu", strlen(str));

    printf("\n\n");

    return 0;

}