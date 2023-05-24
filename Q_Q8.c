#include<stdio.h>
void add(int (*p)[5],int n)
{
    int sum=0,i=0;
    for(i=0;i<n;i++)
    {
        sum = sum + (*p)[i];
    }
    printf("The sum of all the elements of the array is %d",sum);
}
int main()
{
    int a[5] = {0};
    printf("Enter 5 positive integers of an array\n");
    for(int i = 0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    add(&a,5);
    return 0;
    
}