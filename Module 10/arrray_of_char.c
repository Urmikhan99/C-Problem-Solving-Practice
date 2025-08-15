#include<stdio.h>
int main() 
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%c",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%c\n",a[i]);
    }
    
    return 0;
}

#include<stdio.h>
int main() 
{
    int a[5];
    int sz=sizeof(a)/sizeof(char);
    printf("%d",sizeof(a)); 
    return 0;
}