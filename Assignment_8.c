/*1.Star Pattern
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/

#include <stdio.h>
int main()
{
    int i, j, lines;
    // scanf("%d",&lines);
    for (i = 1; i <= 5; i++)
    {

        for (j = 5; j >= 0; j--)
        {
            if (i <= j-1)
            {
                printf("*");
                
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

/*3.Star Pattern
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=i;j<=4;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/

/*4.Star Pattern
#include <stdio.h>
int main()
{
    int i, j, lines;
    // scanf("%d",&lines);
    for (i = 1; i <= 5; i++)
    {

        for (j = 1; j <= 5; j++)
        {
            if (j >= i)
            {
                printf("*");
                
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}*/