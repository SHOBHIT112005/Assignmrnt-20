#include<stdio.h>
#include<string.h>
void string_swap(char (*p)[10],char (*q)[10])
{
    char s[10];
    strcpy(s,*p);
    strcpy(*p,*q);
    strcpy(*q,s);

}
int main()
{
    char a[10] = "hoonigan",b[10] = "Mustang";
    printf("The original strings are : - a = %s and b = %s\n",a,b);
    string_swap(&a,&b);
    printf("The sqapped strongs are :- a = %s and b = %s\n",a,b);
    return 0;
}