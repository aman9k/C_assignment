/*1.Program to print Nth term of the Fibonacci Series
#include<stdio.h>
int main()
{
    int prev=0,curr=0,next=1,n;
    printf("Enter a Number ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        curr=prev+next;
        
        prev=next;
        next=curr;
    }
    printf("%d ",curr);
}*/

/*2.Program to print N terms of Fibonacci Series
#include<stdio.h>
int main()
{
    int prev=0,curr=0,next=1,n;
    printf("Enter a Number ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        curr=prev+next;
        printf("%d ",curr);
        prev=next;
        next=curr;
    }
}*/

/*3.Program to print Nth term of the Fibonacci Series
#include<stdio.h>
int main()
{
    int prev=0,curr=0,next=1,a,flag=0;
    printf("Enter a Number to find");
    scanf("%d",&a);
    for(int i=1; i<=a; i++)
    {
        curr=prev+next;
        if(a==curr){
            flag=1;
        printf("Number %d Found at %dth position",a,i);
        break;
        }
        prev=next;
        next=curr;
    }
    if(flag==0)
    printf("Number not found");
}*/

/*4. Program to Calculate H.C.F of Two Numbers
#include<stdio.h>
int main()
{
    int i,a,b,hcf=0,max;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    max=a>b?a:b;
    for(i=2;i<=max/2;i++)
    {
        if(a%i==0&&b%i==0)
        {
          hcf=i;
        }
    }
    printf("%d\n",hcf);
}*/

/*5.Program to Check Whether two given numbers are co-prime numbers or not
#include<Stdio.h>
int main()
{
    int a,b,i,max=0;
    printf("Enter First Number\n");
    scanf("%d",&a);
    printf("Enter Second Number\n");
    scanf("%d",&b);
    max=(a>b)?a:b;
    while(i)
    {
        if( max%a==0 && max%b==0)
        {
            printf("L.C.M of %d and %d is %d\n",a,b,max);
            break;
        }
        ++max;
    }
    
    if(max==a*b)
    printf("Numbers are Co-Primes");
    else
    printf("Numbers are not Co-Primes");
}*/


/*7. Program to print all prime numbers Under 100 numbers
#include<stdio.h>
int main()
{
    int i,a,count;
    for(a=1;a<=100;a++)
    {
        count=0;
        for(i=2;i<=a/2;i++)
   {
       if(a%i==0){
        count++;
        break;
    }
    }
         if(count==0 && a!=1)
    printf("%d\n",a);
 }
}*/


// #include<stdio.h>
// int main()
// {
//     int a,i;
//     for(i=1;i<=100;i++)
//     {
//         for(int j=2; j<=100; j++)
//             if(i%j!=0)
//             printf("%d",i);
//             break;
//     }
// }















// #include<stdio.h>
// int main()
// {
//     int i,n,flag=0;
//     for(n=20;i;n++)
//     {
//         flag=0;
//         for(i=2;i<=n/2;i++)
//         {
//             if(n%i==0);
//             flag=1;
//         }
//         if(flag==0){
//         printf("%d",n);
//         break;
//     }
// }
// }
