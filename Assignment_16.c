/*1.Program to Add Values of Two 2d Arrays of 3*3.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter Values For First Array\n");
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
    {
        scanf("%d",&a[j][i]);
    }
    }
    printf("Enter Values For Second Array\n");
    for ( j = 0; j <= 2; j++)
    {
        for(i=0;i<=2;i++)
    {
        scanf("%d",&b[j][i]);
    }
    }
    
    printf("Sum of Matrices is...\n");
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
        printf("%d ",a[j][i]+b[j][i]);
        printf("\n");
   }
}*/

/*2.Program to Find Product of two 2d arryas
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter Values For First Array\n");
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
    {
        scanf("%d",&a[j][i]);
    }
    }
    printf("Enter Values For Second Array\n");
    for ( j = 0; j <= 2; j++)
    {
        for(i=0;i<=2;i++)
    {
        scanf("%d",&b[j][i]);
    }
    }
    
    printf("Product of Two matrices is...\n");
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
        printf("%d ",a[j][i]*b[j][i]);
        printf("\n");
   }
}*/
