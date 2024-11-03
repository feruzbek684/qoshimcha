#include <stdio.h>
int main () {
    int a, b, yig = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    for (size_t i = a; i <= b; i++)
    {
        yig = yig + i;
    }

    printf("%d ", yig);
    
}