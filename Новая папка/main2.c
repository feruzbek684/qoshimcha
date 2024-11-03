#include <stdio.h>
int main () {
    int boshlanish = 40, toxtatish = 5000;
    int j = 0, son;
    scanf("%d", &son);
    son = son - 1;
    printf("sonlar");
    for (size_t i = boshlanish; i < toxtatish; i++)
    {
        if (i % 2 == 0 && i % 7 == 0 && i % 6 == 0 && i % 4 ==0)
        {
            printf("%d ", i);
            j ++;

            if (j == son)
            {
                break;
            }
            
        }
        
    }
}