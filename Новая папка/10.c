#include <stdio.h>
int main () {
int n;
    scanf("%d", &n);
    for (size_t i = 1; i < n; i++)
    {
        if (i %  3 == 0)
        {
            printf("%d ", i);
        }
        
    }
    
}    

