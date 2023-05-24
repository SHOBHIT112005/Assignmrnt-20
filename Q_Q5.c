#include<stdio.h>
int compare(int *a,int *b)
{
    if(*a > *b)
    return *a;
    else
    return *b;
}
int main()
{
    int p = 0,q = 0;
    printf("Enter 2 integers\n");
    scanf("%d %d",&p,&q);
    printf("The greatest number is %d",compare(&p,&q));
    return 0;
}