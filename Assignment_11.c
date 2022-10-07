/*1.#include<stdio.h>
void printN(int);
int main()
{
    printN(6);
}
void  printN(int n)
{
    if(n>=0)
    printN(n-1);
    printf("%d\n",n);
}*/

/*2.#include<stdio.h>
void printn(int n);
int main()
{
    printn(10);
}

void printn(int n)
{
    if(n>=1)
    printf("%d\n",n);
    printn(n-1);
}*/

/*3.#include<stdio.h>
void printodd(int);
int main()
{
    printodd(10);
}

void printodd(int n)
{  
    if(n>1)
    printodd(n-1);
    printf("%d",2*n-1);
}*/

/*4.#include<stdio.h>
void printodd(int);
int main()
{
    printodd(10);
}

void printodd(int n)
{  
    if(n>=1)
    printf("%d\n",2*n-1);
    printodd(n-1);
}*/
/*5.#include<stdio.h>
void printodd(int);
int main()
{
    printodd(10);
}

void printodd(int n)
{  
    if(n>1)
    printodd(n-1);
    printf("%d\n",2*n);
}*/

/*6.#include<stdio.h>
void printodd(int);
int main()
{
    printodd(10);
}

void printodd(int n)
{  
    if(n>=1)
    printf("%d\n",2*n);
    printodd(n-1);
}*/

/*7.#include<stdio.h>
void printodd(int);
int main()
{
    printodd(10);
}

void printodd(int n)
{  
    if(n>1)
    printodd(n-1);
    printf("%d ",n*n);
}*/

#include<stdio.h>
void printodd(int);
int main()
{
    printodd(478);
}

void printodd(int n)
{  
   int r=0,r1;
    if(n!=0)
    {
        r1=n%10;
        r=r*10;
        n=n/10;
        r=r1+r;
    printodd(n-1);
    printf("%d",n);
    }
    
}