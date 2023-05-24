#include<stdio.h>
int i=0,j=0;
void sort(int *p,int n)
{
    int t=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i]>p[j])
            {
                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
        }
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
    sort(&a,5);
    printf("The sorted array is :-\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    
}