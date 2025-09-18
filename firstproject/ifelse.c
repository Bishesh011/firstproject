#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    if(a>0)
    {
        printf("The given %d number is positive\n",a);
    }
    else if(a<0)
    {
        printf("The given %d number is negsative\n",a);
    }
    else
    {
        printf("The given %d number is zero\n",a);
    }
    return 0;
}