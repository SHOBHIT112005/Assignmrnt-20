#include<stdio.h>
void swap(int *p,int *q)
{
    int t = 0;
    t = *p;
    *p = *q;
    *q = t;
    printf("The swapped values are :- a = %d and b = %d\n",*p,*q);
}
int main()
{
    int a=0,b=0;
    printf("Enter 2 positive numbers\n");
    scanf("%d %d",&a,&b);
    printf("The original values are :- a = %d and b = %d\n",a,b);
    swap(&a,&b);
    return 0;

}