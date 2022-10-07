#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*1.Write Function to Input variable length string and store it in an array without memory wastage
char *inputstring()
{
    char *p, *q, ch;
    int i,len=1;
    p=(char *)malloc(len);
    ch=getche();
    *p=ch;
    do{
        q=(char *)malloc(len+1);
        for(i=0;i<len;i++)
            *(q+i)=*(p+i);
        *(q+i)='\0';
        free(p);
        len++;
        p=(char *)malloc(len);
        for(i=0;i<len;i++)
            *(p+i)=*(q+i);
        free(q);
        ch=getche();
        *(p+len-1)=ch;
    }while(ch!=13);
        q=(char *)malloc(len);
        for(i=0;i<len;i++)
        *(q+i)=*(p+i);
    *(q+i-1)='\0';
    return q;
    } 
    int main()
    {
        char *str;
        str=inputstring();
        printf("You Have entered : %s",str);
    }*/

/*2.Write a program to ask the user to input a number of data values he would like to enter then create 
an array dynamically to accomodate the data values.
int main()
{
    int sum=0,i,n,*p;
    printf("How Many Data Values you would like to enter: ");
    scanf("%d",&n);
    p=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
            scanf("%d",&p[i]);
            sum=sum+p[i];
    }
    printf("Average is %d",sum/n);
    free(p);
}*/

/*3.Program to calculate the sum of n numbers entered by the user using malloc and free.
int main()
{
    int *p,i,sum=0,n;
    printf("How many Numbers you want to add?\n");
    scanf("%d",&n);
    p=malloc(sizeof(int)*n);
    for(i=0;i<4;i++)
    {
        printf("Enter %d number\n",i);
        scanf("%d",&p[i]);
        sum=sum+p[i];
    }
    printf("Sum is : %d ",sum);
    free(p);
}*/

/*4.Write a program to input and print text using dynamic memory allocation
int main()
{
    int n;
    char *p;
    scanf("%d",&n);
    p=malloc(sizeof(char)*n);
    fflush(stdin);
    fgets(p,n,stdin);
    printf("%s",p);
    free(p);
}*/

/*5.Write a program to read one dimensional array, print sum of all elements 
along with iinput array elements using dynamic memory allocation
int main()
{
    int sum=0,i,*p,n;
    printf("Enter No. of Elements\n");
    scanf("%d",&n);
    p = (int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    for(i=0;i<n;i++)
    {
        sum=sum+p[i];
        printf("%d-",p[i]);
        printf("%d\n",sum);
    }
    free(p);
}*/

/*6.Write a Program in C to find the largest element using Dynamic Memory allocation.
int findG(int *p,int n)
{
    int g,i;
    g=p[0];
    for(i=0;i<n;i++)
    {
        if(g<p[i+1])
        g=p[i+1];
    }
    return g;
}
int main()
{
    int g,i,*p,n;
    printf("Enter No. of Elements\n");
    scanf("%d",&n);
    p = (int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    printf("%d",findG(p,n));
    free(p);
}*/

/*10.Find out maximum and minimum from an array using dynamic memory allocation in C.
int findG(int *p,int n)
{
    int g,i;
    g=p[0];
    for(i=1;i<n;i++)
    {
        if(g<p[i])
        g=p[i];
    }
    return g;
}

int findS(int *p,int n)
{
    int s,i;
    s=p[0];
    for(i=1;i<n;i++)
    {
        if(s>p[i])
        s=p[i];
    }
    return s;
}

int main()
{
    int g,i,*p,n;
    printf("Enter No. of Elements\n");
    scanf("%d",&n);
    p = (int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    printf("Maximum is : %d\n",findG(p,n));
    printf("Minimum is : %d",findS(p,n));
    free(p);
}*/



