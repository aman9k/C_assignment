#include<stdio.h>
int main()
{
    char str[3][20];
    int i,vowel=0;
    for(i=0;i<=2;i++)
    fgets(str[i],20,stdin);
    for(i=0;i<=2;i++)
    {
            if(*(str)=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                vowel++;
            if(*(str)=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vowel++;
    }  
    printf("%d",vowel);
    return 0;
}