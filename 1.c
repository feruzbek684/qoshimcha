#include <stdio.h>

int main () {
    int a, b=1;
    printf("sonni kiriting: ");
    scanf("%d", &a);
    printf("result: ");
    while (b <= a)
    {
        if (a % b == 0){
            printf(" %d ", b);
        }
        b++;
    }
    
}