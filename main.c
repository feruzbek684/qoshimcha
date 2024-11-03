#include <stdio.h>
#include <string.h>
int main () {
    char ism[20];
    printf("Ismingizni kiriting: ");
    scanf("%s", &ism);
    int count = strlen(ism);
    while (count >= 0)
    {
        printf("%c", ism[count]);
        count --;
    }
    
    return 0;
}