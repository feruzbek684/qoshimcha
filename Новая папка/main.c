#include <stdio.h>
int main () {
    //* 1 dan 10 gacha sonlar
    printf("\n 1 dan 10 gacha  ");
    for (size_t i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    //* 1 dan 10 gacha juft sonlar 
    printf("\n 1 dan 10 gacha juft ");
    for (size_t i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        
    }
    printf("\n 1 dan 10 gacha toq  ");
    //* 1 dan 10 gacha toq sonlar 

    for (size_t i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        } 
    }
    printf("\n 10 dan 1 gacha teskari  ");

    //* 10 dan 1 gacha teskari sonlar 
    for (size_t i = 10; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n a dan b gacha 7 bolinadigan  ");

    //* a dan b gacha 7ga bolinadigan 

    int a, b;
    scanf("%d%d", &a, &b);
    for (size_t i = a; i < b; i++)
    {
        if (i  % 7 == 0)
        {
            printf("%d ", i);
        }
        
    }
    
    //* 
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