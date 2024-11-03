#include <stdio.h>
int main () {
    int n, sum = 0;
    scanf("%d", &n);
    for (size_t i = 1; i < n; i++)
    {
        if (i % 3 == 0 && i % 8 == 0 && i % 2 == 0)
        {
            printf("%d ", i);
            sum = sum + i;

        }
        
    }
    
    printf("\n%d ", sum);
}