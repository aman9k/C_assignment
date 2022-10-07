/*1.Write a function to Calculate the area of a circle.
float circ(float r)
{
    return 3.14*r*r;
}*/

/*
/*2.Function to Calculate Simple Interest.
float si(float p, float r, float t)
{
    return (p*r*t)/100;
}

/*Write a Function to Check whether a given number is odd oreven.
int iseven(int a)
{
    if(a%2==0)
    return 0;
    return 1;
 }*/

/*4.Write a Function to Print First N Natural Numbers
int nNumbers(int n)
{
    int i;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
}*/

/*5.Write a Function to print n odd natural
 int nNumbers(int n)
{
    int i;
    while(i<=n)
    {
        printf("%d\n",i*2-1);
        i++;
    }
}*/

/*int fact(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    fact=fact*i;
    return fact;
}*/

/*9.Write a Function to check whether a given number contains
a given digit or not.
int ifthere(int a)
{
    int i,k,r=0,flag=0;
    printf("Enter a Number");
    scanf("%d",&a);
    printf("Enter the number you want to find");
    scanf("%d",&k);
    for(i=0;i<=a;i++)
    {
        r=a%10;
        if(r==k){
        flag=1;
        return k;
        break;
        }
        a=a/10;
    }
    if(flag!=1)
    return flag;
}*/

/*10.Write a Function to print all prime numbers of a given number.
#include <stdio.h>
int main()
{
    int a, i,isprime;
    printf("Enter a NUmber");
    scanf("%d", &a);
    for (i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            isprime = 1;
             for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    isprime = 0;
                    break;
                }
            }
                if (isprime == 1)
                {
                    printf("%d ", i);
                }
            }
        }
    }*/
