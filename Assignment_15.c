/*1.Write a Function to Find greatest Number from an array
 int greatest(int a[],int s)
    {
        int i,g;
        printf("Enter Values in the Array");
        for(i=0;i<s;i++)
        {
            scanf("%d",&a[i]);
        }
        g=a[0];
        for(i=0;i<s;i++)
        {
            if(g<a[i])
            g=a[i];
        }
        return g;
    }*/

/*2.Write a Function to find Smallest Number from an array
int smallest(int a[],int s)
    {
        int i,sm;
        printf("Enter Values in the Array");
        for(i=0;i<s;i++)
        {
            scanf("%d",&a[i]);
        }
        sm=a[0];
        for(i=0;i<s;i++)
        {
            if(sm>a[i])
            sm=a[i];
        }
        return sm;
    }*/

/*3.Write a Function to Sort an Array of any Size.
#include<stdio.h>
int* sort(int[],int);
int main()
{
    int a[10];
    int *p;
    p=sort(a,10);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",(*(p+i)));
    }
}
int* sort(int a[],int s)
{
    int i,j,temp;
    printf("Enter values in Array");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
      
    
    
    for(i=0;i<s;i++){
        for(j=i+1;j<s;j++){
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a;

}

/*Function to Rotate Array in a Given Direction.
#include<stdio.h>
void rotate();
int main()
{
    int a[5];
    rotate(a,5);
}

void rotate(int a[],int s)
{

    int temp,n;
    printf("Enter Values\n");
    for(int i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    } 
    printf("How many times You Want array to Rotate towards left\n");
    scanf("%d",&n);
 for(int j=1; j<=n; j++)
 { 
    temp=a[0];   
    for(int i=0; i<=4; i++)
    {
        a[i]=a[i+1];
    }
        a[4]=temp;
 }  
     for(int i=0; i<=4; i++)
    {
        printf("Value at %d index %d\n",i,a[i]);
    }
}*/
/*4.Write a Function to rotate an Array by n position in d direction. The d is an indicative
//vaue for left and right. 
#include<stdio.h>
int main()
{
    int a[6]={40,24,36,61,22,50};
    char d;
        int move;
        printf("In Which Direction You Want To Move the Array\n");
        printf("Press L for Left and R for Right\n");
        scanf("%c",&d);
        printf("How Many Times You want To move the array\n");
        scanf("%d",&move);
        if(d==108||d==76)
            rotatel(a,move);
        if(d==114||d==82)
            rotater(a,move);
    return 0;
}
   void rotatel(int a[],int move)
        {
            int j,i,t;
        for ( j = 0; j < move; j++)
    {
            t=a[0];
            for(i=0;i<=4;i++)
        {
            a[i]=a[i+1];
            if(i==4)
            a[i+1]=t;
        }
    }
        for(i=0;i<=5;i++)
        printf("%d ",a[i]);
}
   void rotater(int a[])
{     
            int j,i,t,move;
            for ( j = 0; j < move; j++)
    {
            t=a[5];
            for(i=4;i>=0;i--)
        {
            a[i+1]=a[i];
            if(i==0)
            a[i]=t;
        }
    }
        for(i=0;i<=5;i++)
        printf("%d ",a[i]);
  }*/

/*5.Program to Find First Occurence of Adjacent Duplicate Values
#include<stdio.h>
int adj();
int main()
{
    int a[5],s;
    s=adj(a,5);
    printf("%d",s);
}
int adj(int a[],int s)
{
    int d;
    printf("Enter Values\n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
        for(int i=0; i<=3; i++)
        {
            if(a[i]==a[i+1])
            {
                d=a[i];
            }
        }
    return d;
}*/

/*6.Function to Display array of size n in reverse order
#include<stdio.h>
void display();
int main()
{
    int n;
    printf("Enter The Size Of the Array\n");
    scanf("%d",&n);
    int a[n];
    display(a,n);
}
void display(int a[],int s)
{
    printf("Enter Values\n");
    for(int i=0; i<s; i++)
        scanf("%d",&a[i]);
    for(int i=s-1; i>=0; i--)
        printf("%d ",a[i]);
}*/

/*#include<stdio.h>
int main()
{
    int a[7],d;
    nDuplicate(a,7);
}
void nDuplicate(int a[],int s)
{
    int count;
    printf("Enter Values\n");
    for(int i=0; i<s; i++)
        scanf("%d",&a[i]);

for(int j=0;j<s;j++)
{
        count=0;
    for(int i=j+1;i<s;i++)
    {
        if(a[j]==a[i])
        count++; 
    }

    if(count!=0)    
    {
        printf("%d - %d\n",a[j],count);
  }
 }
}*/

/*#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter Values of the array\n");
    for(i==0;i<=4;i++)
    scanf("%d",&a[i]);
    unique(a,5);
    return 0;
}
void unique(int a[],int s)
{
    int i,j,count;
    printf("-----------------\n");
    for(i=0;i<s-1;i++)
 { 
    count=0;
    for(j=i+1;j<s;j++)
    {
        if(a[i]==a[j]);
        count++;
    }
       if(count==0)
        printf("%d\n",a[j]);
 }
}*/

// #include<stdio.h>
// int main()
// {
//     int a[10],b[10];
//     printf("Enter Values in First Array\n");
//     for(int i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     printf("Enter Values in Second Array\n");
//     for(int i=0;i<10;i++)
//     scanf("%d",&b[i]);
//     sort(a,b);
//     return 0;
// }
// int sort(int a[],int b[])
// {
//     int c[20];
//     int i,j,t,k;
//         for(i=9;i>=0;i--)
//             c[9-i]=a[i];
//         for(i=9;i>=0;i--)
//             c[19-i]=b[i];
//      for(j=0;j<19;j++)
//     {
//         for(i=j+1;i<19;i++)
//         {
//             if(c[i]<c[j])
//             {
//                 t=c[i];
//                 c[i]=c[j];
//                 c[j]=t;
//             }
//         }
//     }
//         for(i=0;i<20;i++)
//         printf("%d ",c[i]);
// }

/*Program to add Values of Two Arrays
#include<stdio.h>
int main()
{
    int a[5],b[5],i;
    printf("Enter Values For First Array\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Values For Second Array\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<=4;i++)
    printf("Sum of %d and %d is %d\n",a[i],b[i],a[i]+b[i]);
}*/

/*Programt to Find Differences of two Arrays
#include<stdio.h>
int main()
{
    int a[5],b[5],i;
    printf("Enter Values For First Array\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Values For Second Array\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<=4;i++)
    printf("Difference of %d and %d is %d\n",a[i],b[i],a[i]-b[i]);
}*/



/*Program to Find Difference between two 2d arrays
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
    
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
        printf("Difference of %d and %d is %d\n",a[j][i],b[j][i],a[j][i]-b[j][i]);
   }
}
*/


