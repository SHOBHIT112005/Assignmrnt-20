#include<stdio.h>
int i=0;
void rev(int (*p)[5],int n)
{
    int b[5]={0};
    for(i=0;i<n;i++)
    {
        b[i] = (*p)[i];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
    }
    for(i=n;i>=0;i--)
    {
        (*p)[i] = b[n-i-1];
    }
}
int main()
{
    int a[5] = {0};
    printf("Enter 5 positive integers of an array\n");
    for(i = 0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    rev(&a,5);
    printf("The reversed array is :-\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    
}