#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    if(a>0)
    {
        printf("The number is positive\n");
    }
    else if(a<0)
    {
        printf("The number is negsative\n");
    }
    else
    {
        printf("The number is zero\n");
    }
    return 0;
}